# include "Point.hpp"

Point::Point()
{
	std::cout << "Point construtor called ! "<< std::endl;
	this->_x = new Fixed();
	this->_y = new Fixed();
}

Point::Point(const Point &ref)
{
	std::cout << "Copy Point construtor called ! "<< std::endl;
	this->_x = ref._x;
	this->_y = ref._y;
}

Point::Point(float const x, float const y)
{
	std::cout << "float Point construtor called ! "<< std::endl;
	this->_x = new Fixed(x);
	this->_y = new Fixed(y);
}

Point::~Point()
{
	std::cout << "Point Destrutor called ! " << std::endl;
	delete this->_x;
	delete this->_y;
}