#include "Card.h"

int Card::GetValue() const
{
	int value = 0;
	if (IsFaceUp)
	{
		value = static_cast<int>(CardNominal);
	}
	return value;
}
