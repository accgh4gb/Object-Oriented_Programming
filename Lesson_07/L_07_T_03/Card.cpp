#include "Card.h"

int Card::GetValue() const
{
	int value = 0;
	if (IsFaceUp)
	{
		value = static_cast<int>(CardNominal);
	}
	return value;
}

// перегружает оператор <<, чтобы получить возможность отправить
// объект типа Card в поток cout
std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
	const std::string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8",
	"9","10", "J", "Q", "K" };
	const std::string SUITS[] = { "c", "d", "h", "s" };
	
	if (aCard.IsFaceUp)
	{
		os << RANKS[static_cast<int>(aCard.CardNominal)] << SUITS[static_cast<int>(aCard.CardSuit)];
	}
	else
	{
		os << "XX";
	}

	return os;
}
