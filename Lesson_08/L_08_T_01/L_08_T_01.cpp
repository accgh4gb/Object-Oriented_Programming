#include <iostream>

//using namespace std;

class DivisionByZero
{
public:
    const char* getError()
    {
        return "Division by zero!";
    }
};

template <typename T>
const T mydiv(const T& a, const T& b)
{
    if (b == 0) {
        throw DivisionByZero();
    }

    return a / b;
}

int main()
{
    try
	{
        double i = mydiv(8, 0);
		std::cout << i << std::endl;
    }
	catch (DivisionByZero err)
	{
		std::cout << err.getError() << std::endl;
    }    

    return 0;
}
