#include "Student.h"

// Student::Student()
// {
// 	YearsOfStudy = 0;
// 	StudentCounter++;
// }
//
void Student::SetYearsOfStudy()
{
	unsigned int new_YearsOfStudy = 0;
    while (new_YearsOfStudy <= 0)
    {
		std::cout << "Please, enter an age: ";
        std::cin >> new_YearsOfStudy;
	}
    YearsOfStudy = new_YearsOfStudy;
}

void Student::SetYearsOfStudy(unsigned int new_YearsOfStudy)
{
	if(new_YearsOfStudy >= 0)
    {
		YearsOfStudy = new_YearsOfStudy;
    }
}

void Student::AddYears(unsigned int new_add)
{
	if (new_add >= 0)
	{
		YearsOfStudy += new_add;
	}
}

void Student::PrintInfo()
{
	Person::PrintInfo();
	std::cout << "Years of study: " << YearsOfStudy << std::endl << std::endl;
}
