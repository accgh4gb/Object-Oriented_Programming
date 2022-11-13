#include "Apple.h"
#include "GrannySmith.h"
#include "Banana.h"

// 2. Создать классы Apple (яблоко) и Banana (банан),
// которые наследуют класс Fruit (фрукт). У Fruit есть
// две переменные-члена: name (имя) и color (цвет).
// Добавить новый класс GrannySmith, который наследует класс Apple.

int main()
{
	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.GetName() << " is " << a.GetColor() << ".\n";
	std::cout << "My " << b.GetName() << " is " << b.GetColor() << ".\n";
	std::cout << "My " << c.GetName() << " is " << c.GetColor() << ".\n";

	return 0;
}

// Код, приведенный выше, должен давать следующий результат:
//
// My apple is red.
// My banana is yellow.
// My Granny Smith apple is green.

