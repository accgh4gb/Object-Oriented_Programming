#include "Apple.h"

class GrannySmith : public Apple
{
public:
	GrannySmith()
	{
		SetName("GrannySmith " + Apple::GetName());
	}
};
