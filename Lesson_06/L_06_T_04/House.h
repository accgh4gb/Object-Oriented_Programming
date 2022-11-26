#include "GenericPlayer.h"

class House : public GenericPlayer
{
public:
	House(const std::string& name = "House");
	
	virtual ~House();
	// показывает, хочет ли дилер продолжать брать карты
	virtual bool IsHitting() const;
	// переворачивает первую карту
	void FlipFirstCard();
};
