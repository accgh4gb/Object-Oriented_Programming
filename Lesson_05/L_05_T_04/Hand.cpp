#include "Hand.h"

void Hand::Add(Card *pCard)
{
	vCards.push_back(pCard);
}

void Hand::Clear()
{
	std::vector<Card*>::iterator it = vCards.begin();
    while (it != vCards.end())
    {
		delete* it;
		*it = nullptr;
        ++it;
    }
    vCards.clear();
}

int Hand::GetValue() const
{
	if (vCards.empty())
	{
		return 0;
    }

    int summ = 0;
    
	for (auto it = vCards.begin(); it != vCards.end(); ++it)
    {
		if (((*it)->GetValue() == static_cast<int>(NOMINALS::ACE)) && (vCards.size() > 1))
		{
			summ += 11;
		}
		else
		{
			summ +=(*it)->GetValue();
		}
    }
    
	return summ;
}
