#include <iostream>

// Реализовать класс Pair,
// который позволяет использовать разные типы данных в передаваемых парах.
// Следующий код:

// int main()
// {
//     Pair<int, double> p1(6, 7.8);
//     cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
//     const Pair<double, int> p2(3.4, 5);
//     cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
//     return 0;
// }

// … должен производить следующий результат:
// Pair: 6 7.8
// Pair: 3.4 5
// Подсказка: чтобы определить шаблон с использованием двух разных типов,
// просто разделите параметры типа шаблона запятой.

template <class T1, class T2>
class Pair
{
private:
	T1 t_first;
	T2 t_second;

public:
	Pair(T1 my_first, T2 my_second) : t_first(my_first), t_second(my_second) {}
	T1 first() const { return t_first; }
	T2 second() const { return t_second; }
	~Pair() {}
};
