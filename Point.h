#pragma once
#include<string>
using namespace std;
class Point
{
	double x, y;
public:
	Point(double _x = 0, double _y = 0);
	double getX();
	double getY();
	void setY(double _y);
	void setX(double _x);
	string toString();
	void moveX(double _x);
	void moveY(double _y);
	double distanceToTheOrigin();
	double distBetweenPoints(Point a);
	string transformToPolar();
	bool comparison(Point a);
};