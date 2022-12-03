#include <iostream>

class IllegalCommand
{
private:
	std::string msg;
	int currentX;
	int currentY;
	int newX;
	int newY;

public:
	IllegalCommand();
	IllegalCommand(int c_x, int c_y, int n_x, int n_y);
	const std::string& getMsg() const { return msg; }
	~IllegalCommand(){}
};
