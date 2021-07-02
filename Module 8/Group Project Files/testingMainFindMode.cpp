/*********************************************************************
** Author: Justin Hammel
** Date: 2/22/2017
** Description: This main program is used for testing various
** functions.
*********************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

typedef int userNumbers [];

std::vector <int> findMode (userNumbers, int);

int main ()
{
	//setup array to hold user input
	const int SIZE = 10;
	int inputNumbers [SIZE];
		
	//gather user input
	cout << "Input " << SIZE << " integer values \n";
	
	//store user input values into array
	for (int &userInput : inputNumbers)
		cin >> userInput;
	
	//send user input to the function to find mode
	vector <int> modeResult(findMode (inputNumbers, SIZE));
		
	//display user values for verification
	cout << "The entered values were: \n";
	for (int outValue : inputNumbers)
		cout << outValue << ", ";
	cout << "\nThe mode is: \n";
	for (int outMode : modeResult)
		cout << outMode << ", ";
	cout << "\n";
	
	return 0;
}