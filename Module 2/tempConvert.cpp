/*********************************************************************
** Author: Justin Hammel
** Date: 1/18/2017
** Description: Module 2 assignment 2b Celsius to Farenheit program
*********************************************************************/
#include <iostream>

// a program to convert Celsius to Farenheit

int main()
{
	double userCelsius;
	double userFarenheit;
	
	std::cout << "Please enter a Celsius temperature." << std::endl;	//user input
	std::cin >> userCelsius;
	
	userFarenheit = ((9/5)*userCelsius + 32);	//convert Celsius to Farenheit
	
	std::cout << "The equivalent Farenheit temperature is:\n" << userFarenheit << std::endl;

    return 0;
}