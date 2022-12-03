#include "Bar.h"

int main()
{
	Bar b;
	int n;
	while (true)
	{
		std::cout << "\n[Task 2]\nEnter a number: ";
		try
		{
			if (std::cin >> n && n != 0)
			{
				b.setBar(n);
			}
			
			break;
		}
		catch (const Ex& ex)
		{
			std::cout << "Exception: " << ex.x << "\n";
		}
	}

	return 0;
}
