 #include "Apple.h"
Apple::Apple()
{
	SetName(" apple");
	SetColor("green");
}

Apple::Apple(const std::string& new_color)
{
	SetName("apple");
	SetColor(new_color);
}

Apple::~Apple()
{

}
