#include "Student.h"

unsigned int Student::StudentCounter = 0;

int main()
{
	Person p("Helen", 112.3, 38, GENDER::FEMALE);
	p.PrintInfo();
	Student s;
    s.SetYearsOfStudy(5);
	s.SetPersonName("Michael");
    s.AddYears(2);
	s.PrintInfo();
	Student s1("Daniel", 82.3, 21, GENDER::MALE, 3);
	s1.SetPersonGender(GENDER::MALE);
	//s1.SetPersonGender();
	s1.PrintInfo();
	Student s2("Jane", 52.8, 25, GENDER::FEMALE,1);
	s2.PrintInfo();
	p.SetPersonWeight(62.5);
	p.PrintInfo();
	s.PrintStatic();

	return 0;
}
