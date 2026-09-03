#include <iostream>

class Point
{
private :
	double m_x {};
	double m_y {};
	double m_z {};
	
public :
	Point (double x = 0.0 , double y = 0.0 , double z = 0.0)
	: m_x {x} , m_y {y} , m_z {z}
	{}
	friend std::ostream& operator<< (std::ostream& out , const Point& point);

};

std::ostream& operator<< (std::ostream& out , const Point& point)
{
	out << "Point(" << point.m_x << ',' << point.m_y << ',' << point.m_z << ')' ;
	return out;
}

int main ()
{
	Point phone {4.0 , 5.5 , 7.6};
	std::cout << phone << '\n';
	return 0;
}