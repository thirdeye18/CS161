/*********************************************************************
** Author: Justin Hammel
** Date: 2/14/2017
** Description: Implementation of Point class to create a point object
				with coordinates (x, y).  Class also has method to 
				calculate the distance between point objects using 
				formula based on Pythagorean theorem.
*********************************************************************/
#include <iostream>
#include <cmath>

#include "Point.hpp"

/*********************************************************************
** Default constructor for the point
**
*********************************************************************/

Point::Point ()
{
	setXCoord (0.0);
	setYCoord (0.0);
}

/*********************************************************************
** Constructor for the point
**
*********************************************************************/

Point::Point (double xCordinateIn, double yCordinateIn)
{
	setXCoord (xCordinateIn);
	setYCoord (yCordinateIn);
}

/*********************************************************************
** Description: Mutator function to set the x coordinate
**
*********************************************************************/

void Point::setXCoord (double givenX)
{
    xCoordinate = givenX;    
}

/*********************************************************************
** Description: Mutator function to set the y coordinate
**
*********************************************************************/

void Point::setYCoord (double givenY)
{
    yCoordinate = givenY;    
}
/*********************************************************************
** Description: Accessor function for the x coordinate
**
*********************************************************************/

double Point::getXCoord () const
{
    return xCoordinate;    
}

/*********************************************************************
** Description: Accessor function for the y coordinate
**
*********************************************************************/

double Point::getYCoord () const
{
    return yCoordinate;    
}

/*********************************************************************
** Description: Function returns distance between two points
**
*********************************************************************/

double Point::distanceTo (const Point &pointTwo)
{
	double x1, x2, y1, y2;
	x1 = getXCoord ();
	y1 = getYCoord ();
	x2 = pointTwo.getXCoord ();
	y2 = pointTwo.getYCoord ();
	double pointDistance = sqrt ( pow ((x2 - x1), 2.0) + pow ((y2 - y1), 2.0));    
    return pointDistance;
}