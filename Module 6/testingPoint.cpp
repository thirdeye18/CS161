/*********************************************************************
** Author: Justin Hammel
** Date: 2/14/2017
** Description: Main function for testing other files
*********************************************************************/
#include <iostream>

#include "Point.hpp"
#include "LineSegment.hpp"

int main ()
{
    //Point Class Testing
	//Construct two points
	Point p1 (-1.5, 0.0);
	Point p2 (1.5, 4.0);
	
	//Distance between two points assigned to variable
	double dist = p1.distanceTo (p2);
	
	//Display results of distanceTo and values for constructed points
	std::cout << "Point 1: (" << p1.getXCoord () << ", ";
	std::cout << p1.getYCoord () << ")\n";
	std::cout << "Point 2: (" << p2.getXCoord () << ", "; 
	std::cout << p2.getYCoord () << ")\n";
	std::cout << "Distance between points: " << dist << "\n";
	
	//LineSegment Class Testing
	//Generate points for line segment
	Point p3(-26.01, 100.62);
	Point p4(1.01, 37.75);
	
	//generate line segment using points
	LineSegment ls1(p3, p4);
	
	//Call length and slope functions from line segment class
	double length = ls1.length();
	double slope = ls1.slope();
    
	//Display results
	std::cout << "Point 3: (" << p3.getXCoord () << ", ";
	std::cout << p3.getYCoord () << ")\n";
	std::cout << "Point 4: (" << p4.getXCoord () << ", "; 
	std::cout << p4.getYCoord () << ")\n";
	std::cout << "Length of line segment: " << length << "\n";
	std::cout << "Slope of line segment: " << slope << "\n";

	return 0;
}
