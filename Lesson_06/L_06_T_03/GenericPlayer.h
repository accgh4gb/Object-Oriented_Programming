#include "Hand.h"
#include <iostream>
//#include <string>

class GenericPlayer : public Hand
{
private:
	std::string name;
	friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& player);

public:
	GenericPlayer(const std::string m_name = "") : name(m_name) {}
	const std::string& GetName() const { return name; }
	virtual bool IsHitting() const = 0; // показывает, хочет ли игрок продолжать брать карты
										// Для класса GenericPlayer функция не имеет своей реализации,
										// т.к. для игрока и дилера это будут разные функции
	
	bool IsBoosted() const; // возвращает значение, если у игрока перебор -
							// сумму очков большую 21
							// данная функция не виртуальная, т.к. имеет одинаковую реализацию
							// для игрока и дилера
	
	void Bust() const; // объявляет, что игрок имеет перебор
					   // функция одинакова как для игрока, так и для дилера

	virtual ~GenericPlayer() {}
};
