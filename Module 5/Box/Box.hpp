/*********************************************************************
** Author: Justin Hammel
** Date: 2/7/2017
** Description: Header file that defines interface of the Box class 
*********************************************************************/
#include <iostream>

#ifndef BOX_HPP
#define BOX_HPP

class Box
{
private:
	//declaration of variables
	double height; 
	double width; 
	double length;
	
public:
	//default constructor
	Box ()
	{
	height = 1.0;
	width = 1.0;
	length = 1.0;
	}

	//constructor with parameters
	Box (double givenHeight, double givenWidth, double givenLength);
	
	//declaration of functions
	//setters
	
	void setHeight (double);
	void setWidth (double);
	void setLength (double);
	
	//getters
	
	double getVolume ();
	double getSurfaceArea ();
};

#endif