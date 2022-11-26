#include <iostream>
#include <limits>

int main()
{
    int intVal;
    do
    {
		std::cout << "Enter an integer value ";
		std::cin>>intVal;
        if ((std::cin.fail())||(std::cin.peek() != '\n'))
		{
			std::cout << "\n Wrong value \n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            intVal = -1;
        }

    }
	while (intVal ==-1);
	std::cout << "The integer value is: " <<intVal << std::endl;

    return 0;
}
