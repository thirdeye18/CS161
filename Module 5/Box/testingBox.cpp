/*********************************************************************
** Author: Justin Hammel
** Date: 2/5/2017
** Description: Main function for testing other files
*********************************************************************/
#include <iostream>

#include "Box.hpp"

int main ()
{
    Box box1(5.0, 5.0, 5.0);
	Box box2;
	double volume1 = box1.getVolume();
	std::cout << volume1 << "\n";
	double surfaceArea1 = box1.getSurfaceArea();
	std::cout << surfaceArea1 << "\n";
	double volume2 = box2.getVolume();
	std::cout << volume2 << "\n";
	double surfaceArea2 = box2.getSurfaceArea();
	std::cout << surfaceArea2 << "\n";
	
    return 0;
}
