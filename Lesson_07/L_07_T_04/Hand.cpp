#include "Hand.h"

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

void Hand::SetFlip(const int index)
{
	vCards[index]->Flip();
}

int Hand::GetTotal() const
{
	// если карт в руке нет, возвращает значение 0
	if (vCards.empty())
	{
		return 0;
	}
	//если первая карта имеет значение 0, то она лежит рубашкой вверх:
	// вернуть значение 0
	if (vCards[0]->GetValue() == 0)
	{
		return 0;
	}
	// находит сумму очков всех карт, каждый туз дает 1 очко
	int total = 0;
	std::vector<Card*>::const_iterator iter;
	
	for (iter = vCards.begin(); iter != vCards.end(); ++iter)
	{
		total += (*iter)->GetValue();
	}
	// определяет, держит ли рука туз
	bool containsAce = false;

	for (iter = vCards.begin(); iter != vCards.end(); ++iter)
	{
		if ((*iter)->GetValue() == static_cast<int>(NOMINALS::ACE))
		{
			containsAce = true;
		}
	}

	// если рука держит туз и сумма довольно маленькая, туз дает 11 очков
	if (containsAce && total <= 11)
	{
	// добавляем только 10 очков, поскольку мы уже добавили
	// за каждый туз по одному очку
		total += 10;
	}
	
	return total;
}
