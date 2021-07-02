/*********************************************************************
** Author: Justin Hammel
** Date: 2/7/2017
** Description: Implementation of Box class to take width, height, and
				length then determine surface area and volume of 
				the box
*********************************************************************/
#include <iostream>

#include "Box.hpp"

/*********************************************************************
** Constructor for the box
**
*********************************************************************/

Box::Box (double givenHeight, double givenWidth, double givenLength)
{
	height = givenHeight;
	width = givenWidth;
	length = givenLength;
}

/*********************************************************************
** Description: Mutator function to set the height of the box
**
*********************************************************************/

void Box::setHeight (double givenHeight)
{
    height = givenHeight;    
}

/*********************************************************************
** Description: Mutator function to set the width of the box
**
*********************************************************************/

void Box::setWidth (double givenWidth)
{
     width = givenWidth;   
}

/*********************************************************************
** Description: Mutator function to se the length of the box
**
*********************************************************************/

void Box::setLength (double givenLength)
{
    length = givenLength;    
}

/*********************************************************************
** Description: Function returns the volume of the box
**
*********************************************************************/

double Box::getVolume ()
{
	double boxVolume = length * width * height;    
    return boxVolume;
}

/*********************************************************************
** Description: Function returns the surface area of the box
**
*********************************************************************/

double Box::getSurfaceArea ()
{
	double boxSurfaceArea = 2 * (length * width) + 2 * (length * height) + 2 * (height * width);    
    return boxSurfaceArea;
}
