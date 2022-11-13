#include "Person.h"

Person::Person()
{

}

void Person::SetPersonName()
{
	std::string new_name;
	std::cout << "Please, enter a name: ";
	std::getline(std::cin, new_name);
	if (!new_name.empty())
	{
		new_name.swap(PersonName);
	}
}

void Person::SetPersonName(std::string new_name)
{
	if (!new_name.empty())
	{
		new_name.swap(PersonName);
	}
}

void Person::SetPersonWeight()
{
	double new_weight = 0;
	while (new_weight <= 0)
	{
		std::cout << "Please, enter a weight: ";
		std::cin >> new_weight;
	}	
	PersonWeight = new_weight;
}

void Person::SetPersonWeight(double new_weight)
{
	if(new_weight >= 0)
	{
		PersonWeight = new_weight;
	}	
}

void Person::SetPersonAge()
{
	unsigned int new_age = 0;
	while (new_age <= 0)
	{
		std::cout << "Please, enter an age: ";
		std::cin >> new_age;
	}	
	PersonAge = new_age;
}

void Person::SetPersonAge(unsigned int new_age)
{
	if(new_age >= 0)
	{
		PersonAge = new_age;
	}	
}

void Person::SetPersonGender()
{
	unsigned char choose = 0;
	while (choose <= 0 || choose > 3)
	{
		std::cout << "Please, choose an option:" << std::endl;
		std::cout << "1 - Male" << std::endl;
		std::cout << "2 - Female" << std::endl;
		std::cout << "3 - Prefer not to declare" << std::endl;
		std::cin >> choose;
		switch (choose)
		{
		case 1:
			{
				PersonGender = GENDER::MALE;
				break;
			}
		case 2:
			{
				PersonGender = GENDER::FEMALE;
				break;
			}
		case 3:
			{
				PersonGender = GENDER::PREFER_NOT_TO_DECLARE;
				break;
			}
		}
		std::cout << std::endl;
	}	
}

void Person::SetPersonGender(GENDER new_gender)
{
	PersonGender = new_gender;
}

void Person::PrintInfo()
{
	std::cout << "Name: " << PersonName << std::endl;
	std::cout << "Weight: " << PersonWeight << std::endl;
    std::cout << "Age: " << PersonAge << std::endl;
	switch (static_cast<char>(PersonGender))
	{
		case 1:
		{
			std::cout << "Gender: Male" << std::endl;
			break;	
		}
		case 2:
		{
			std::cout << "Gender: Female" << std::endl;
			break;
		}
		case 3:
		{
			std::cout << "Gender: Prefer not to declare" << std::endl;
		}
	}
}


Person::~Person()
{

}
