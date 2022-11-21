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
	ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
};

enum class SUIT
{
	HEARTS, DIAMONDS, CLUBS, SPADES
};


class Card
{
private:
	NOMINALS CardNominal;
	SUIT CardSuit;
	bool Position = false; // карта лежит верх рубашкой

public:
	Card(const NOMINALS& Nom, const SUIT& SUIT, bool Pos)
	: CardNominal(NOMINALS::ACE), CardSuit(SUIT::HEARTS), Position(false) {}
	
	bool Flip() { return !Position; }
	int GetValue() const { return static_cast<int>(CardNominal); }
	~Card() {}

};
