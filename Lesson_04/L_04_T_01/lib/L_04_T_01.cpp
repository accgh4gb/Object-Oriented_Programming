#include "Arrayint.h"

int main()
{
	ArrayInt arr;
    arr.push_back(42);
    arr.push_back(11);
    arr.push_back(20);
    arr.push_back(5);
    arr.push_back(18);
    arr.push_back(3);
    arr.push_back(234);
    arr.push_back(0);
    arr.push_back(98);
    arr.push_back(61);
	std::cout << "Array is " << arr << std::endl;

    arr.mySort();
	std::cout << "Sorted array is " << arr << std::endl;

    arr.pop_front();
    arr.pop_front();
    arr.pop_front();
    arr.pop_front();
    arr.pop_front();
	std::cout << "Delete 5 front elements. Array is " << arr << std::endl;

    arr.pop_back();
	std::cout << "Delete 1 last element. Array is " << arr << std::endl;

	return 0;
}
