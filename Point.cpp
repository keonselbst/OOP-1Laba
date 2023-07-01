#include "Point.h"
#include<cmath>
#include<valarray>
#include<iostream>

Point::Point(double _x, double _y)
{
	x = _x;
	y = _y;
}

double Point::getX()
{

	return x;
}

double Point::getY()
{
	return y;
}

void Point::setY(double _y)
{
	y = _y;
}

void Point::setX(double _x)
{
	x = _x;
}

string Point::toString()
{
	string str;
	str = " оординаты точки в декартовой системе координат: x=";
	str += to_string(x);
	str += ", y=";
	str += to_string(y);
	return str;
}

void Point::moveX(double _x)
{
	x += _x;
}

void Point::moveY(double _y)
{
	y += _y;
}

double Point::distanceToTheOrigin()
{
	double dist;
	dist = sqrt(pow(x, 2) + pow(y, 2));
	return dist;
}

double Point::distBetweenPoints(Point a)
{
	double dist = sqrt(pow(x - a.x, 2) + pow(y - a.y, 2));
	return dist;
}

string Point::transformToPolar()
{
	string str;
	double _x, _y;
	_x = sqrt(pow(x, 2) + pow(y, 2));
	if ((x == 0) && (y == 0))
	{
		str = "пол€рный радиус r=0, пол€рный угол a неопределен";
		return str;
	}
	if (x)
		_y = atan(y / x);
	else _y = asin(y / (sqrt(pow(x, 2) + pow(y, 2))));
	if (x < 0 && y < 0)
		_y -= 3.14;
	if (x < 0 && y>0)
		_y += 3.14;
	if (x == 0 && y < 0)
		_y = 3 * 3.14 / 2;
	if (x < 0 && y == 0)
		_y = 3.14;
	str = " оординаты точки в пол€рной системе координат: пол€рный радиус r=";
	str += to_string(_x);
	str += ", пол€рный угол в радианах a =";
	str += to_string(_y);
	return str;
}

bool Point::comparison(Point a)
{
	if ((x == a.x) && (y == a.y))
		return true;
	else
		return false;
}