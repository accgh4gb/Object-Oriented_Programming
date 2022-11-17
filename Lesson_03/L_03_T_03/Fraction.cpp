#include "Fraction.h"

Fraction::Fraction(const int& new_Num, const int& new_Denom)
{
	if(new_Denom == 0)
	{
		std::cout << "Denomination is equal to 0" << std::endl;
	}
	else
	{
		Numerator = new_Num;
		Denominator = new_Denom;
	}
}

void Fraction::GetValues() const
{
	std::cout << Numerator << "/" << Denominator << std::endl;
}

Fraction operator+(const Fraction& F1, const Fraction& F2)
{
	int tmpNum = F1.Numerator + F2.Numerator;
	int tmpDenom = 0;
	if ((F1.Denominator % F2.Denominator) == 0)
	{
		tmpDenom = F1.Denominator;
	}
	else if ((F2.Denominator % F1.Denominator) == 0)
	{
		tmpDenom = F2.Denominator;
	}
	else
	{
		tmpDenom = F1.Denominator * F2.Denominator;
	}

	return Fraction(tmpNum, tmpDenom);
}

Fraction operator-(const Fraction& F1, const Fraction& F2)
{
	int tmpNum;
	int tmpDenom;

	if ((F1.Denominator % F2.Denominator) == 0)
	{
		tmpDenom = F1.Denominator;
	}
	else if ((F2.Denominator % F1.Denominator) == 0)
	{
		tmpDenom = F2.Denominator;
	}
	else
	{
		tmpDenom = F1.Denominator * F2.Denominator;
	}

	tmpNum = (F1.Numerator * (tmpDenom / F1.Denominator)) - (F2.Numerator * (tmpDenom / F2.Denominator));
	return Fraction(tmpNum, tmpDenom);
}

Fraction operator*(const Fraction& F1, const Fraction& F2)
{
	int tmpNum = F1.Numerator * F2.Numerator;
	int tmpDenom = F1.Denominator * F2.Denominator;
	return Fraction(tmpNum, tmpDenom);
}

Fraction operator/(const Fraction& F1, const Fraction& F2)
{
	int tmpNum = F1.Numerator * F2.Denominator;
	int tmpDenom = F1.Denominator * F2.Numerator;
	return Fraction(tmpNum, tmpDenom);
}

bool operator==(const Fraction& F1, const Fraction& F2)
{
	bool flag = false;
	int tmpDenom;

	if ((F1.Denominator % F2.Denominator) == 0)
	{
		if (F1.Numerator == (F2.Numerator * (F1.Denominator / F2.Denominator)))
		{
			flag = true;
		}
	}
	else if ((F2.Denominator % F1.Denominator) == 0)
	{
		if ((F1.Numerator * (F2.Denominator / F1.Denominator) == F2.Numerator))
		{
			flag = true;
		}
	}
	else
	{
		tmpDenom = F1.Denominator * F2.Denominator;
		if (((tmpDenom / F1.Denominator) * F1.Numerator) == ((tmpDenom / F2.Denominator) * F2.Numerator))
		{
			flag = true;
		}
	}
	
	return flag;
}

bool operator!=(const Fraction& F1, const Fraction& F2)
{
	return !(F1 == F2);
}

bool operator<(const Fraction& F1, const Fraction& F2)
{
	bool flag = false;
    int tmpDenom = 0;
         
    if ((F1.Denominator % F2.Denominator) == 0)
    {
		if (F1.Numerator < (F2.Numerator * (F1.Denominator / F2.Denominator)))
        {   
		    flag = true;
        }
    }
    else if ((F2.Denominator % F1.Denominator) == 0)
    {   
		if ((F1.Numerator * (F2.Denominator / F1.Denominator) < F2.Numerator))
        {   
			flag = true;
		}
    }
    else
    {   
		tmpDenom = F1.Denominator * F2.Denominator;
		if (((tmpDenom / F1.Denominator) * F1.Numerator) < ((tmpDenom / F2.Denominator) * F2.Numerator))
        {   
		    flag = true;
        }
    }
    
	return flag;
}

bool operator>(const Fraction& F1, const Fraction& F2)
{   
	bool flag = false;
    int tmpDenom = 0;
             
    if ((F1.Denominator % F2.Denominator) == 0)
    {
		if (F1.Numerator > (F2.Numerator * (F1.Denominator / F2.Denominator)))
        {
		    flag = true;
        }
    }
    else if ((F2.Denominator % F1.Denominator) == 0)
    {
		if ((F1.Numerator * (F2.Denominator / F1.Denominator) > F2.Numerator))
        {
		    flag = true;
        }
    }
    else
    {
		tmpDenom = F1.Denominator * F2.Denominator;
        if (((tmpDenom / F1.Denominator) * F1.Numerator) > ((tmpDenom / F2.Denominator) * F2.Numerator))
        {
		    flag = true;
        }
    }
       
    return flag;
}

bool operator<=(const Fraction& F1, const Fraction& F2)
{
	return !(F1 > F2);
}

bool operator>=(const Fraction& F1, const Fraction& F2)
{
	return !(F1 < F2);
}
