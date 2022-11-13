#include "Person.h"
#include <string>


class Student : public Person
{
private:
	unsigned int YearsOfStudy;
	static unsigned int StudentCounter;

public:
	//Student();
	Student(std::string new_name = "", double new_weight = 0, unsigned int new_age = 0, 
		GENDER new_gender = GENDER::PREFER_NOT_TO_DECLARE, unsigned int new_YearsOfStudy = 0)
		: Person(new_name, new_weight, new_age, new_gender),
		YearsOfStudy(new_YearsOfStudy)
	{
		StudentCounter++;
	}
	
	void SetYearsOfStudy();
	void SetYearsOfStudy(unsigned int new_YearsOfStudy);
	void AddYears(unsigned int new_add);
	void PrintInfo();
	static void PrintStatic()
	{
		std::cout << StudentCounter << std::endl;
	}
	~Student()
	{
		--StudentCounter;
	}
};
