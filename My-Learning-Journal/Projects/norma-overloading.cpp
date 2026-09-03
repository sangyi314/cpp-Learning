#include <iostream>

class Cents 
{
private :
	int m_cents {};

public :
	Cents(int cents) 
	: m_cents {cents}
	{}
	
	int getCents() const
	{
		return m_cents;
	}
	
};

Cents operator+(const Cents& c1 , const Cents& c2)
	{
		return (c1.getCents() + c2.getCents());
	}

int main ()
{
	Cents cents1 {6};
	Cents cents2 {8};
	Cents centssum {cents1 + cents2};
	std::cout << "I have " << centssum.getCents() << " cents" << ' ';
	return 0;
}