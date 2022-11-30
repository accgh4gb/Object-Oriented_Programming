#include "Deck.h"
#include <algorithm>

Deck::Deck()
{
	GetHand().reserve(52);
	Populate();
}

Deck::~Deck()
{}

void Deck::Populate()
{
	Clear();
	// создает стандартную колоду
	for (int s = static_cast<int>(SUIT::HEARTS); s <= static_cast<int>(SUIT::SPADES); ++s)
	{
		for (int r = static_cast<int>(NOMINALS::ACE); r <= static_cast<int>(NOMINALS::KING); ++r)
		{
			Add(new Card(static_cast<NOMINALS>(r), static_cast<SUIT>(s)));
		}
	}
}

void Deck::Shuffle()
{
	random_shuffle(GetHand().begin(), GetHand().end());
}

void Deck::Deal(Hand& aHand)
{
	if (!GetHand().empty())
	{
		aHand.Add(GetHand().back());
		GetHand().pop_back();
	}
	else
	{
		std::cout << "Out of cards. Unable to deal.";
	}
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{
	std::cout << std::endl; // продолжает раздавать карты до тех пор, пока у игрока не случается
					   // перебор или пока он хочет взять еще одну карту
	
	while (!(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting())
	{
		Deal(aGenericPlayer);
		std::cout << aGenericPlayer << std::endl;
		if (aGenericPlayer.IsBusted())
		{
			aGenericPlayer.Bust();
		}
	}
}
