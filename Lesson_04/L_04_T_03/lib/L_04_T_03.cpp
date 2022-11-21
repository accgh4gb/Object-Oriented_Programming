#include "Hand.h"

int main()
{
 Hand h;
    Card c1(NOMINALS::ACE, SUIT::HEARTS, false);
    Card c2(NOMINALS::NINE, SUIT::SPADES, false);
    Card c3(NOMINALS::JACK, SUIT::DIAMONDS, false);
    h.Add(&c1);
    h.Add(&c2);
    h.Add(&c3);
    std::cout << h.GetValue() << std::endl;
	return 0;
}
