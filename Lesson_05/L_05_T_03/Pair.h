#include <iostream>

template<class T1, class T2>
class Pair
{
private:
	T1 t_first;
	T2 t_second;

public:
	Pair(T1 first, T2 second) : t_first(first), t_second(second) {}
	T1 first() const { return t_first; }
	T2 second() const { return t_second; }
	~Pair() {}
};
