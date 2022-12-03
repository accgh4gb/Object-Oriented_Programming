#include "Robot.h"

int main()
{
	int numX, numY;
	Robot r;
	while (true)
	{
		std::cout << "Enter coordinate X and Y: ";
		std::cin >> numX >> numY;

		if (numX == 0 && numY == 0)
		{
			break;
		}
		try
		{
			r.move(numX, numY);
		}
		catch (const IllegalCommand& exept)
		{
			std::cout << exept.getMsg() << '\n';
		}
		catch (const OffTheField& exept)
		{
			std::cout << exept.getMsg() << '\n';
		}

	}

	return 0;
}
