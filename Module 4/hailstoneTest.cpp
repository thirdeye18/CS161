/*********************************************************************
** Author: Justin Hammel
** Date: 2/2/2017
** Description: Program that calls function that determines number of steps required to reach one in a hailstone sequence 
*********************************************************************/
#include <iostream>

using std::cout;
using std::cin;

int hailstone(int &startingNumber);

//using int main() for testing function

/* int main()
{
	int startingNumber, stepsTaken;
	cout << "Input starting positive integer value \n";
	cin >> startingNumber;
	cout << "\n";
	stepsTaken = hailstone (startingNumber);
	cout << "It took " << stepsTaken << " steps to reach 1.\n";
	return 0;
} */
/*********************************************************************
** Description: Function that determines the number of steps required to reach one in a hailstone sequence
**
*********************************************************************/
int hailstone (int &startingNumber)
{
	int stepsTaken;
	for (stepsTaken = 0; startingNumber != 1; stepsTaken++)
	{
	if (startingNumber % 2 == 0)
		startingNumber /= 2;
	else 
		startingNumber = startingNumber * 3 + 1;
	}
	return stepsTaken;
}