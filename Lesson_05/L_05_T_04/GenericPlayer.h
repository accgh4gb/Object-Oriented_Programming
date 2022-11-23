#include "Hand.h"
#include <ostream>
#include <string>

class GenericPlayer : public Hand
{
private:
	std::string name;
	friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& player);

public:
	GenericPlayer(const std::string m_name = "") : name(m_name) {}
	const std::string& GetName() const { return name; }
	virtual bool IsHitting() const = 0;
	bool IsBoosted() const;
	void Bust() const;
	virtual ~GenericPlayer() {}
};
