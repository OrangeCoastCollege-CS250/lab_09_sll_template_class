#include "Pair.h"

	//friend function
ostream& operator<<(ostream& out, const Pair& p)
{
	out << "(" << p.first << "," << p.second << ")";
	return out;
}

Pair::Pair( )
{ 
	first = 0;
	second = 0;
}

Pair::Pair(int firstValue, int secondValue)
{
    first = firstValue;
    second = secondValue;
}

Pair::~Pair( )
{ }

void Pair::setFirst(int newValue)
{
    first = newValue;
}

int Pair::getFirst( ) const
{
    return first;
}

void Pair::setSecond(int newValue)
{
    second = newValue;
}

int Pair::getSecond( ) const
{
    return second;
}

