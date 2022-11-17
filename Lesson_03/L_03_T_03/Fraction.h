#include <iostream>

// Создать класс: Fraction (дробь).
// Дробь имеет числитель и знаменатель (например, 3/7 или 9/2).
// Предусмотреть, чтобы знаменатель не был равен 0. Перегрузить:
//		математические бинарные операторы (+, -, *, /)
//		для выполнения действий с дробями
//		унарный оператор (-) //(перегрузка через метод класса)
//		логические операторы сравнения двух дробей (==, !=, <, >, <=, >=).
//
//	Примечание: Поскольку операторы < и >=, > и <= — это логические
//	противоположности, попробуйте перегрузить один через другой.
//	Продемонстрировать использование перегруженных операторов.

class Fraction
{
private:
	int Numerator = 1;
	int Denominator = 1;

public:
	Fraction(const int& new_Num, const int& new_Denom);
	void GetValues() const;
	int GetNum() const { return Numerator; }
	int GetDenom() const { return Denominator; }
	Fraction operator-() const { return Fraction(-Numerator, -Denominator); }
	friend Fraction operator+(const Fraction& F1, const Fraction& F2);
	friend Fraction operator-(const Fraction& F1, const Fraction& F2);
	friend Fraction operator*(const Fraction& F1, const Fraction& F2);
	friend Fraction operator/(const Fraction& F1, const Fraction& F2);
	friend bool operator==(const Fraction& F1, const Fraction& F2);
	friend bool operator!=(const Fraction& F1, const Fraction& F2); 		
	friend bool operator<(const Fraction& F1, const Fraction& F2);
	friend bool operator>(const Fraction& F1, const Fraction& F2);
	friend bool operator<=(const Fraction& F1, const Fraction& F2);
	friend bool operator>=(const Fraction& F1, const Fraction& F2);

	~Fraction() {};
};
