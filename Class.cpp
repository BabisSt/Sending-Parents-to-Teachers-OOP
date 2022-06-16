#include <iostream>
#include "Class.h"
using namespace std;


Point::Point(int x,int y,int z)
{
	this->x = x;
	this->y = y;
	this->z= z;
}

Point::Point(const Point &p)
{
	this->x = p.x;
	this->y = p.y;
	this->z= p.z;
}

void Point::print_epiloges() const
{
	cout << "O Goneas " << this->x << " paei ston kathigiti " << this->y << "\n";
}

void Point::print_arithmo_kath() const
{
	cout <<"O Goneas " << this->x << " thelei na paei se " << this-> z << " kathigites \n " ;
}

List::List()
{
	std::cout << "Creating a list.\n";
	this->_size = 0;
	this->front = NULL;
}

List::~List()
{
	std::cout << "Destroying a list.\n";
}

