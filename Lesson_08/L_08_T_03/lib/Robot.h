#include "IllegalCommand.h"
#include "OffTheField.h"

class Robot
{
private:
	int posX;
	int posY;

public:
	Robot(int x = 0, int y = 0) : posX(x), posY(y)
	{
		std::cout << "Starter position is: [" << posX << "]|[" << posY << "]\n";
	}
	
	void move(int x, int y);
	
	~Robot() {}
};
