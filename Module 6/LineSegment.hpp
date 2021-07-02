/*********************************************************************
** Author: Justin Hammel
** Date: 2/14/2017
** Description: Header file that defines interface of the LineSegment
				class 
*********************************************************************/
#include <iostream>

#include "Point.hpp"

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

class LineSegment
{
private:
	//declaration of variables
	Point endPoint1;
	Point endPoint2;
	
public:
	//constructor with parameters
	LineSegment (Point, Point);
	
	//declaration of functions
	//setters
	void setEnd1 (Point);
	void setEnd2 (Point);
	
	//getters
	Point getEnd1 ();
	Point getEnd2 ();
	
	//accessors
	double length ();
	double slope ();
};

#endif