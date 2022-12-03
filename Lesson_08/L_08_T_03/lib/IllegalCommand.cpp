#include "IllegalCommand.h"

IllegalCommand::IllegalCommand()
{
	currentX = 0;
   	currentY = 0;
   	newX = 0;
   	newY = 0;
   	msg = "";
}

IllegalCommand::IllegalCommand(int c_x, int c_y, int n_x, int n_y)
{
	if (abs(currentX - newX) > 1)
    {   
		msg += "Coordinate X FAIL! Step is too big!\n";
		msg += '[' + std::to_string(currentX) + ']' + '[' + std::to_string(currentY)
        + "] to [" + std::to_string(newX) + ']' + '[' + std::to_string(newY) + "]\n";
	}
    if (abs(currentY - newY) > 1)
    {   
		msg += "Coordinate Y FAIL! Step is too big!\n";
        msg += '[' + std::to_string(currentX) + ']' + '[' + std::to_string(currentY)
        + "] to [" + std::to_string(newX) + ']' + '[' + std::to_string(newY) + "]\n";
    }
    if (currentX == newX && currentY == newY)
    {   
		msg += "Coordinate X and Y FAIL! You can't step into the current location!\n";
        msg += '[' + std::to_string(currentX) + ']' + '[' + std::to_string(currentY)
        + "] to [" + std::to_string(newX) + ']' + '[' + std::to_string(newY) + "]\n";
    }
}

