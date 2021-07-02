/*********************************************************************
**
** Author: Hammel, Justin T
**
** Date: 3/17/17
**
** Description: This is the implementation of the Customer class.
**		There is a constructor which takes strings for name
**		account id, and a bool value to denote premium
**		members.  There are getters for each of these
**		parameters as well as one to get the cart vector
**		of strings. There are methods to add products to the
**		cart and to empty the cart.
**
*********************************************************************/

#include <iostream>
#include <string>
#include <vector>

#include "Customer.hpp"

using std::string;
using std::vector;

Customer::Customer(string n, string a, bool pm)
{
	name = n;
	accountID = a;
	premiumMember = pm;
}

string Customer::getAccountID()

{
	return accountID;
}

vector <string> Customer::getCart()
{
	return cart;
}

void Customer::addProductToCart(string addItem)
{
	cart.push_back(addItem);
}

bool Customer::isPremiumMember()
{
	return premiumMember;
}

void Customer::emptyCart()
{
	cart.clear();
}
