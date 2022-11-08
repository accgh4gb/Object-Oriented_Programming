#include <iostream>
#include "RGBA.h"

int main()
{
	RGBA first; 
	first.print();
	
	first.RGBASet(234, 7, 198, 201);
	first.print();

	RGBA second(226, 17, 179, 1);	
	second.print();
	return 0;
}
