/*********************************************************************
** Author: Justin Hammel
** Date: 2/5/2017
** Description: Implementation of BankAccount class to take customer 
				name, id, and balance.  BankAccount can also perform
				deposit and withdraw functions on the account balance
				
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

#include "BankAccount.hpp"

/*********************************************************************
** Constructor for BankAccount
**
*********************************************************************/
	
BankAccount::BankAccount (std::string name, std::string ID, double balance)
{
	customerName = name;
	customerID = ID;
	customerBalance = balance;
}

/*********************************************************************
** Description: Function to retrieve customerName
**
*********************************************************************/

std::string BankAccount::getCustomerName ()
{
	return customerName;
}

/*********************************************************************
** Description: Function to retrieve customerID
**
*********************************************************************/

std::string BankAccount::getCustomerID ()
{
	return customerID;
}

/*********************************************************************
** Description: Function to retrieve customerBalance
**
*********************************************************************/

double BankAccount::getCustomerBalance ()
{
	return customerBalance;
}

/*********************************************************************
** Description: Function to withdraw money from the account
**
*********************************************************************/

void BankAccount::withdraw (double wd)
{
/* 	double wd;   */  
    customerBalance -= wd; 
}

/*********************************************************************
** Description: Function to deposit money in the account
**
*********************************************************************/

void BankAccount::deposit (double dep)
{
	/* double dep; */
	customerBalance += dep;
}
