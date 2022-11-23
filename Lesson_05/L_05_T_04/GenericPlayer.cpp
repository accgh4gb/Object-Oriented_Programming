#include "GenericPlayer.h"

bool GenericPlayer::IsBoosted() const
{
	return (Hand::GetValue() > 21);
}

void GenericPlayer::Bust() const
{
	std::cout << name << ", busted!" << std::endl;
}

std::ostream& operator<< (std::ostream& os, const GenericPlayer& player)
{
	os << player.GetName() << ":\t";

    std::vector<Card*>::const_iterator it;
    if (!player.GetHand().empty())
    {
        for (it = player.GetHand().begin(); it != player.GetHand().end(); ++it)
        {
            os << *it << "\t";
        }

        if (player.Hand::GetValue() != 0)
        {
            std::cout << "(" << player.Hand::GetValue() << ")";
        }

    }
    else
    {
        os << "Hand is empty";
    }

    return os;
}
