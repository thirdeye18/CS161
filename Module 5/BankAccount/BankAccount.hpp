/*********************************************************************
** Author: Justin Hammel
** Date: 2/7/2017
** Description: Header file that defines interface of the BankAccount
				class 
*********************************************************************/
#include <iostream>
#include <string>

#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

class BankAccount
{
private:
	//declaration of variables
	std::string customerName; 
	std::string customerID; 
	double customerBalance;
	
public:
	//default constructor
	BankAccount ()
{
	customerName = "";
	customerID = "";
	customerBalance = 0.0;
}

 	//constructor with parameters
	BankAccount (std::string customerName, std::string customerID, double customerBalance);
	
 	//declaration of functions
	
	//getters
	std::string getCustomerName ();
	std::string getCustomerID ();
	double getCustomerBalance ();
	
	//accessors
	void withdraw (double);
	void deposit (double);
	
};

#endif