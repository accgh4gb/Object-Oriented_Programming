#pragma once
#include <vector>
#include "Card.h"

// Реализовать класс Hand, который представляет собой коллекцию карт.
// В классе будет одно поле: вектор указателей карт
// (удобно использовать вектор, т.к. это по сути динамический массив,
// а тип его элементов должен быть - указатель на объекты класса Card).
// Также в классе Hand должно быть 3 метода:
//	• метод Add, который добавляет в коллекцию карт новую карту,
//	соответственно он принимает в качестве параметра указатель
//	на новую карту;
//	• метод Clear, который очищает руку от карт;
//	• метод GetValue, который возвращает сумму очков карт руки
//	(здесь предусмотреть возможность того, что туз может быть равен 11)

class Hand
{
private:
	std::vector<Card*> vCards;

public:
	Hand() {}
	std::vector<Card*> GetHand() const { return vCards; }
	//{ return  }
	void SetFlip(int index);
	void Add(Card* pCard) { vCards.push_back(pCard); }
	void Clear();
	int GetTotal() const;
	virtual ~Hand() { Clear(); }
};
