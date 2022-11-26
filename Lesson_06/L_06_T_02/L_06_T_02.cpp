#include <iostream>

std::ostream& endll(std::ostream& os)
{
    os.flush();
    return os << "\n\n";
}

int main()
{
	std::cout << "it was a new endl" << endll;
	std::cout << "Check line";

    return 0;
}
