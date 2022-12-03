#include "Robot.h"

void Robot::move(int x, int y)
{
	if (abs(posX - x) > 1 || abs(posY - y) > 1 || (posX == x && posY == y))
	{
		throw IllegalCommand(posX, posY, x, y);
	}
	if (x > 10 || x < 1 || y > 10 || y < 1)
	{
		throw OffTheField(posX, posY, x, y);
	}
	std::cout << "Robot is step from [" << posX << '|' << posY << "] to [" << x << '|' << y << "]\n";
    posX = x;
    posY = y;
}
