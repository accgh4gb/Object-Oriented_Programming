#include <iostream>

// Создать класс Card, описывающий карту в игре БлэкДжек.
// У этого класса должно быть три поля: масть, значение
// карты и положение карты (вверх лицом или рубашкой).
// Сделать поля масть и значение карты типом
// перечисления (enum). Положение карты - тип bool.
// Также в этом классе должно быть два метода:
//		- метод Flip(), который переворачивает карту,
//		т.е. если она была рубашкой вверх, то он ее
//		поворачивает лицом вверх, и наоборот.
//		- метод GetValue(), который возвращает значение
//		карты, пока можно считать, что туз = 1.
		
enum class NOMINALS
{
	NOCARD = 0, ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK = 10, QUEEN = 10, KING = 10
};

enum class SUIT
{
	NOSUIT, HEARTS, DIAMONDS, CLUBS, SPADES
};


class Card
{
private:
	NOMINALS CardNominal;
	SUIT CardSuit;
	bool IsFaceUp = false; // карта лежит верх рубашкой

public:
	Card(const NOMINALS& Nom = NOMINALS::NOCARD, const SUIT& SUIT = SUIT::NOSUIT, bool b = false)
	: CardNominal(NOMINALS::ACE), CardSuit(SUIT::HEARTS), IsFaceUp(false) {}
	
	void Flip() { IsFaceUp = !(IsFaceUp); }
	int GetValue() const; 
	friend std::ostream& operator<<(std::ostream& os, const Card& aCard);
	~Card() {}

};
