#include "RGBA.h"
#include <cstdint>


RGBA::RGBA()
{

}

void RGBA::print()
{
	std::cout << "Red = " << static_cast<unsigned int>(m_red) << "; " << "Green = " << static_cast<unsigned int>(m_green)
	   	<< "; " << "Blue = " <<static_cast<unsigned int>(m_blue) << "; "
		<< "Alpha = " << static_cast<unsigned int>(m_alpha) << ";" <<std::endl;
}

void RGBA::RGBASet(uint8_t my_m_red, uint8_t my_m_blue, uint8_t my_m_green, uint8_t my_m_alpha)
{
	m_red = my_m_red;
	m_green = my_m_green;
	m_blue = my_m_blue;
	m_alpha = my_m_alpha;	
}

RGBA::~RGBA()
{
	std::cout << __FUNCTION__ << std::endl;
}
