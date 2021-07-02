/*********************************************************************
** Author: Justin Hammel
** Date: 2/14/2017
** Description: Implementation of Line Segment class that generates 
				a line segment object.  Class contains a method to 
				determine length of the line segment by calling Point 
				class distanceTo method as well as a method to 
				calculate the slope of the line segment.
*********************************************************************/
#include <iostream>

#include "LineSegment.hpp"
#include "Point.hpp"

/*********************************************************************
** Constructor for the line segment with parameters
**
*********************************************************************/

LineSegment::LineSegment (Point point1In, Point point2In)
{
	setEnd1 (point1In);
	setEnd2 (point2In);
}

/*********************************************************************
** Description: Mutator function to set the first point
**
*********************************************************************/

void LineSegment::setEnd1 (Point givenEnd1)
{
    endPoint1 = givenEnd1;    
}

/*********************************************************************
** Description: Mutator function to set the second point
**
*********************************************************************/

void LineSegment::setEnd2 (Point givenEnd2)
{
    endPoint2 = givenEnd2;    
}

/*********************************************************************
** Description: Accessor function for endpoint1
**
*********************************************************************/

Point LineSegment::getEnd1 ()
{
    return endPoint1;    
}

/*********************************************************************
** Description: Accessor function for endpoint 2
**
*********************************************************************/

Point LineSegment::getEnd2 ()
{
    return endPoint2;    
}

/*********************************************************************
** Description: Function returns the length of the line
**
*********************************************************************/

double LineSegment::length ()
{
	Point lengthPoint1 = getEnd1 ();
	Point lengthPoint2 = getEnd2 ();
	double lineLength = lengthPoint1.distanceTo (lengthPoint2);
    return lineLength;
}

/*********************************************************************
** Description: Function returns the slope of the line
**
*********************************************************************/

double LineSegment::slope ()
{
	Point slopePoint1 = getEnd1 ();
	Point slopePoint2 = getEnd2 ();
	double eX1 = slopePoint1.getXCoord ();
	double eY1 = slopePoint1.getYCoord ();
	double eX2 = slopePoint2.getXCoord ();
	double eY2 = slopePoint2.getYCoord ();    
	double lineSlope = (eY2 - eY1) / (eX2 - eX1);
    return lineSlope;
}
