/*********************************************************************
** Author: Justin Hammel
** Date: 2/2/2017
** Description: Function that determines distance an object will fall
				due to gravity over a specified period of time 
*********************************************************************/
#include <iostream>
#include <cmath>

double fallDistance(double fallingTime)
{
	double distance;
	const double GRAVITY = 9.8;
	//Newton's equation for determining the distance object falls 
	//over time due to gravity
	distance = (1.0/2.0) * GRAVITY * pow (fallingTime, 2.0);
	return distance;
}