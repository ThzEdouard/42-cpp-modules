#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed *_x;
		Fixed *_y;
	public:
		Point();
		Point(const Point &ref);
		Point(float const x, float const y);
		~Point();
        Fixed const getX() const;
        Fixed const getY() const;
		Point &operator=(const Point &ref);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif