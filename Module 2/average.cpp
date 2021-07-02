/*********************************************************************
** Author: Justin Hammel
** Date: 1/18/2017
** Description: Module 2 assignment 2a average program
*********************************************************************/
#include <iostream>

// a program to average 5 user inputed values

int main()
{
	double userNumber1;
	double userNumber2;
	double userNumber3;
	double userNumber4;
	double userNumber5;
	double userAverage;
	
	std::cout << "Please enter 5 numbers." << std::endl;	//user input
	std::cin >> userNumber1;
	std::cin >> userNumber2;
	std::cin >> userNumber3;
	std::cin >> userNumber4;
	std::cin >> userNumber5;
	
	userAverage = (userNumber1 + userNumber2 + userNumber3 + userNumber4 + userNumber5)/5;	//average user inputed values
	
	std::cout << "The average of your numbers is:\n" << userAverage << std::endl;

    return 0;
}