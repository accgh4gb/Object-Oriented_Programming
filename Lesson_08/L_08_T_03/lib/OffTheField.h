#include <iostream>

class OffTheField
{
private:
	int currentX;
	int currentY;
	int newX;
	int newY;
	std::string msg;

public:
	OffTheField();
	OffTheField(int c_x, int c_y, int n_x, int n_y);
	
	const std::string& getMsg() const { return msg; }
};
