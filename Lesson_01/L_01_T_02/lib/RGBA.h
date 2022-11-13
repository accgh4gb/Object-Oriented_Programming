#include <iostream>
#include <cstdint>

// 2. Написать класс с именем RGBA, который содержит 4 переменные-члена
// типа std::uint8_t: m_red, m_green, m_blue и m_alpha (#include cstdint для
// доступа к этому типу). Задать 0 в качестве значения по умолчанию
// для m_red, m_green, m_blue и 255 для m_alpha. Создать конструктор
// со списком инициализации членов, который позволит пользователю
// передавать значения для m_red, m_blue, m_green и m_alpha.
// Написать функцию print(), которая будет выводить значения переменных-членов.

class RGBA
{
private:
	uint8_t m_red = 0;
	uint8_t m_green = 0;
	uint8_t m_blue = 0;
	uint8_t m_alpha = 255;

public:
	RGBA();
	RGBA(uint8_t my_m_red, uint8_t my_m_green, uint8_t my_m_blue, uint8_t my_m_alpha)
	: m_red(my_m_red), m_green(my_m_green), m_blue(my_m_blue), m_alpha(my_m_alpha)
	{}
	void RGBASet(uint8_t my_m_red, uint8_t my_m_blue, uint8_t my_m_green, uint8_t my_m_alpha);
	void print();
	~RGBA();
};
