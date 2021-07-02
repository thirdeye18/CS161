/*********************************************************************
** Author: Justin Hammel
** Date: 1/18/2017
** Description: Module 2 assignment 2c change calculator
*********************************************************************/
#include <iostream>

// a program to calculate minimum change from cents inputed

int main()
{
	int inputCents;
	int changeRemainder;
	int quarterNumber;
	int dimeNumber;
	int nickelNumber;
	int pennyNumber;
	double userFarenheit;
	
	std::cout << "Please enter an amount in cents less than a dollar." << std::endl;	//user input
	std::cin >> inputCents;
	
	quarterNumber = inputCents / 25;
	changeRemainder = inputCents % 25;
	dimeNumber = changeRemainder / 10;
	changeRemainder = changeRemainder % 10;
	nickelNumber = changeRemainder / 5;
	changeRemainder = changeRemainder % 5;
	pennyNumber = changeRemainder;
	
	std::cout << "Your change will be:\n"; 
	std::cout << "Q: " << quarterNumber << "\n";
	std::cout << "D: " << dimeNumber << "\n";
	std::cout << "N: " << nickelNumber << "\n";
	std::cout << "P: " << pennyNumber<< std::endl;

    return 0;
}