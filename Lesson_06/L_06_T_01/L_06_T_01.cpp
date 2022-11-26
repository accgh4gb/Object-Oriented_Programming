#include <iostream>
#include <limits>

std::ostream& endll(std::ostream& os)
{
    os.flush();
    return os << "\n\n";
}

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
	std::cout<<"your input: "<<intVal<<endll;
	std::cout<<"it was a new endl"<<endll;

    return 0;
}
