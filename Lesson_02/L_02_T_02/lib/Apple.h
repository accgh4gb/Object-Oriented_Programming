//#pragma once

#include "Fruit.h"

class Apple : public Fruit
{
	//const std::string AppleName = "Apple";
public:
	Apple();
	Apple(const std::string& new_color);
	~Apple();
};
