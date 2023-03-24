#include "Point.hpp"

float    ft_law(Point const p, Point const a, Point const b)
{
    return (((b.getX().toFloat() - p.getX().toFloat())*(a.getY().toFloat() - p.getY().toFloat()))-((b.getY().toFloat() - p.getY().toFloat())*(a.getX().toFloat() - p.getX().toFloat())));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float d1, d2, d3;

    d1 = ft_law(point, a, b);
    d2 = ft_law(point, b, c);
    d3 = ft_law(point, c, a);
	return !((d1 < 0 || d2 < 0 || d3 < 0) && (d1 > 0 || d2 > 0 || d3 > 0));
}
