/*********************************************************************
** Author: Justin Hammel
** Date: 2/14/2017
** Description: Header file that defines interface of the Point class 
*********************************************************************/
#include <iostream>

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
	//declaration of variables
	double xCoordinate; 
	double yCoordinate; 
	
public:
	//default constructor
	Point ();

	//constructor with parameters
	Point (double xCordinateIn, double yCordinateIn);
	
	//declaration of functions
	//setters
	
	void setXCoord (double);
	void setYCoord (double);
	
	//getters
	
	double getXCoord () const;
	double getYCoord () const;
	
	//accessor
	
	double distanceTo (const Point&);
};

#endif