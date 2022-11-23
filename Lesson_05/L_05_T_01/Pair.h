#include <iostream>

// Реализовать шаблон класса Pair1,
// который позволяет пользователю передавать данные одного типа парами.
// Следующий код:

// int main()
// {
//     Pair1<int> p1(6, 9);
//     cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
//     const Pair1<double> p2(3.4, 7.8);
//     cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
//
//     return 0;
// }

// … должен производить результат:
// Pair: 6 9
// Pair: 3.4 7.8

template <class T>
class Pair
{
private:
	T t_first;
	T t_second;

public:
	Pair(T my_first, T my_second) : t_first(my_first), t_second(my_second) {}
	T first() const { return t_first; }
	T second() const { return t_second; }
	~Pair() {}
};
