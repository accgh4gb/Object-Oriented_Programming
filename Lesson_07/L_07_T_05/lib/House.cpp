#include "House.h"

House::House(const std::string& name) : GenericPlayer(name) {}

bool House::IsHitting() const
{
	return (GetTotal() <= 16);
}

void House::FlipFirstCard()
{
	if (!(Hand::GetHand().empty()))
	{
		Hand::SetFlip(0);
	}
	else
	{
		std::cout << "No card to flip!\n";
	}
}

House::~House() {}
