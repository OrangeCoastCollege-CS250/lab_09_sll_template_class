#ifndef PAIR_H
#define PAIR_H

#include <iostream>
using namespace std;

class Pair
{
	friend ostream& operator<<(ostream& out, const Pair& p);

public:
    Pair( );	
	Pair(int firstValue, int secondValue);
	~Pair( );

    void setFirst(int);
    void setSecond(int);

    int getFirst( ) const;
    int getSecond( ) const;

private:
    int first;
    int second;
};

#endif 



