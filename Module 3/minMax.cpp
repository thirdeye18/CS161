/*********************************************************************
** Author: Justin Hammel
** Date: 1/26/2017
** Description: Program returns the minimum and maximum values of user inputed integers after asking how many integers the user would like to test
*********************************************************************/
#include <iostream>

using std::cout;
using std::cin;

int desiredInputs, maxValue, minValue, valueEntered;

int main()
{
    cout << "How many integers would you like to enter?\n"; //Gather desired number of user inputs
	cin >> desiredInputs ;
	cout << "Please enter " << desiredInputs << " integers.\n";
	
	while (desiredInputs > 0) //sets up loop to run the desired number of times
	{
		cin >> valueEntered;
		if (valueEntered > maxValue) //compare entered value to max and reassign if true
			maxValue = valueEntered; 
		if (valueEntered == 0)
			minValue = valueEntered;
		else
			if (valueEntered < minValue) //compare entered value to min and reassign if true
				minValue = valueEntered;
			else 
				minValue = valueEntered;
		desiredInputs--; //desired inputs counter adjust
	}
	
	cout << "min: " << minValue << "\n"; //output results to the display
	cout << "max: " << maxValue << std::endl;
	
    return 0;
}