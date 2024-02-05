# include "Point.hpp"

Point::Point()
{
	//std::cout << "Point construtor called ! "<< std::endl;
	this->_x = Fixed();
	this->_y = Fixed();
}

Point::Point(const Point &ref)
{
	//std::cout << "Copy Point construtor called ! "<< std::endl;
	this->_x = ref._x;
	this->_y = ref._y;
}

Point::Point(float x, float y)
{
	//std::cout << "float Point construtor called ! "<< std::endl;
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::~Point()
{
	//std::cout << "Point Destrutor called ! " << std::endl;
}

Fixed const Point::getX() const
{
    return this->_x;
}

Fixed const Point::getY() const
{
    return this->_y;
}
Point &Point::operator=(const Point &ref) {
    this->_y = ref._y;
    this->_x = ref._x;
    return *this;
}