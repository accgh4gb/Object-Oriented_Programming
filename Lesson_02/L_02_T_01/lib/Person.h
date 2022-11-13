#include <iostream>
#include <string>

// Создать класс Person (человек) с полями: имя,
// возраст, пол и вес. Определить методы переназначения
// имени, изменения возраста и веса. Создать производный
// класс Student (студент), имеющий поле года обучения.
// Определить методы переназначения и увеличения этого
// значения. Создать счетчик количества созданных
// студентов. В функции main() создать несколько
// (не больше трёх) студентов. Вывести информацию о них.

enum class GENDER : char
{
	MALE = 1,
	FEMALE,
	PREFER_NOT_TO_DECLARE
};

class Person
{
private:

	std::string PersonName;
	double PersonWeight;
	unsigned int PersonAge;
	GENDER PersonGender;

public:


	Person();
	Person(std::string new_name = "", double new_weight = 0, unsigned int new_age = 0, GENDER new_PersonGender = GENDER::PREFER_NOT_TO_DECLARE)
		: PersonName(new_name), PersonWeight(new_weight), PersonAge(new_age),
	   	PersonGender(new_PersonGender)
	{}
	void SetPersonName();
	void SetPersonName(std::string new_name);
	void SetPersonWeight();
	void SetPersonWeight(double new_weight);
	void SetPersonAge();
	void SetPersonAge(unsigned int new_age);
	void SetPersonGender();
	void SetPersonGender(GENDER new_gender);
	void PrintInfo();
	~Person();
};
