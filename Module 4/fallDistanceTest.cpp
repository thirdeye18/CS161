/*********************************************************************
** Author: Justin Hammel
** Date: 2/2/2017
** Description: Function that determines distance an object will fall due to gravity over a specified period of time 
*********************************************************************/
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double fallDistance(double fallingTime);

//using int main() for testing function

/* int main()
{
	double fallingTime, distance;
	cout << "Input length of time in seconds \n";
	cin >> fallingTime;	
	cout << "Object fell " << fallDistance (fallingTime) << " meters in " << fallingTime << " seconds \n";
	return 0;
} */

/*********************************************************************
** Description: Function that determines the distance an object will fall due to gravity over a set period of time
**
*********************************************************************/
double fallDistance(double fallingTime)
{
	double distance;
	const double GRAVITY = 9.8;
	//double timeSquared = pow (fallingTime, 2.0);
	distance = (1.0/2.0) * GRAVITY * pow (fallingTime, 2.0);
	return distance;
}