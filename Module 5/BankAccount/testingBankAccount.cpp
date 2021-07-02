/*********************************************************************
** Author: Justin Hammel
** Date: 2/5/2017
** Description: Main function for testing other files
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

#include "BankAccount.hpp"

using std::cout;
using std::endl;

int main ()
{
    //setup display for two decimal points
	cout << std::fixed << std::showpoint << std::setprecision (2) <<endl;
	
	//creating account with class and displaying account information
	cout << "Creating Harry Potter bank account \n";
	BankAccount account1("Harry Potter", "K4637", 8032.78);
	cout << account1.getCustomerName () << endl << account1.getCustomerID () << endl << "$" << account1.getCustomerBalance () << endl;
	
	cout << "Creating Blank bank account \n";
	BankAccount account2;
	cout << account2.getCustomerName () << endl << account2.getCustomerID () << endl << "$" << account2.getCustomerBalance () << endl;
	
	//setup withdraw or deposit  from account and display results
	account1.withdraw (244.0);
	cout << "Current balance: " << account1.getCustomerBalance () << endl;
	account1.withdraw (3012.58);
	cout << "Current balance: " << account1.getCustomerBalance () << endl;	
	account1.deposit (37.54);
	cout << "Current balance: " << account1.getCustomerBalance () << endl;	
	account1.withdraw (5807.12);
	cout << "Current balance: " << account1.getCustomerBalance () << endl;	
	account1.deposit (500.00);
	cout << "Current balance: " << account1.getCustomerBalance () << endl;	
	
	//display final account balance following transactions
	double finalBalance = account1.getCustomerBalance ();
	cout << "Final balance: " << finalBalance << endl;
    
	return 0;
}
