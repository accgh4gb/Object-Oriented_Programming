#include "OffTheField.h"

OffTheField::OffTheField()
{
	currentX = 0;
	currentY = 0;
	newX = 0;
	newY = 0;
	msg = "";
}

OffTheField::OffTheField(int c_x, int c_y, int n_x, int n_y) : currentX(c_x), currentY(c_y), newX(n_x), newY(n_y), msg("")
{
	if (newX > 10 || newX <1 )
    {
		msg += "Coordinate X FAIL! Robot is out of field now!\n";
        msg += '[' + std::to_string(currentX) + ']' + '[' + std::to_string(currentY)
        + "] to [" + std::to_string(newX) + ']' + '[' + std::to_string(newY) + "]\n";
    }
    if (newY > 10 || newY < 1)
    {
		msg += "Coordinate Y FAIL! Robot is out of field now!\n";
		msg += '[' + std::to_string(currentX) + ']' + '[' + std::to_string(currentY)
        + "] to [" + std::to_string(newX) + ']' + '[' + std::to_string(newY) + "]\n";
    }
}
