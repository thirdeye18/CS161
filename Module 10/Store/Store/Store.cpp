/*********************************************************************
**
** Author: Hammel, Justin T
**
** Date: 3/17/17
**
** Description: This is the implementation of the Store class.
**		Store objects created are vectors of pointers to
**		Product and Customer objects. There are methods to
**		add products and members to the store. There are
**		also getters to retrieve these objects from the
**		vectors. Methods exists to searh the store vectors
**		for products with a string parameter provided. A
**		method to add items to member cart given strings for
**		product id and member id exists. Finally a method to
**		allow the member to check out exists which takes the
**		member id as a parameter.
**
*********************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#include "Store.hpp"

using std::string;
using std::vector;
using std::cout;
using std::find;
using std::endl;

void Store::addProduct(Product* p)
{
	inventory.push_back(p);
}

void Store::addMember(Customer* c)

{
	members.push_back(c);
}

Product* Store::getProductFromID(string idGet)
{
	string tempCode;
	Product* ptrProd = NULL;
	for (Product* search : inventory)
	{
		tempCode = search->getIdCode();
		if (idGet == tempCode)
		{
			ptrProd = search;
			return ptrProd;
		}
	}
	return ptrProd;
}

Customer* Store::getMemberFromID(string memIdGet)
{
	string tempId;
	Customer* ptrMbr = NULL;
	for (Customer* search : members)
	{
		tempId = search->getAccountID();
		if (memIdGet == tempId)
		{
			ptrMbr = search;
			return ptrMbr;
		}
	}
	return ptrMbr;
}

void Store::productSearch(string str)
{	
	bool printedTitle = false;
	bool printedDesc = false;
	for (int searchProd = 0; searchProd < inventory.size(); searchProd++)
	{
		//Pull pointer from inventory, pull title and description
		Product* ptrSearch;
		ptrSearch = inventory[searchProd];
		string searchTitle = ptrSearch->getTitle();

		//convert strings being searched to upper case
		for (int convertStr = 0; convertStr < searchTitle.length(); convertStr++)
		{
			if (searchTitle[convertStr] > 96 && searchTitle[convertStr] < 122)
				searchTitle[convertStr] -= 32;
		}

		string searchDesc = ptrSearch->getDescription();
		for (int convertStr = 0; convertStr < searchDesc.length(); convertStr++)
		{
			if (searchDesc[convertStr] > 96 && searchDesc[convertStr] < 122)
				searchDesc[convertStr] -= 32;
		}

		//convert str to upper case
		string tempStr = str;
		for (int convertStr = 0; convertStr < tempStr.length(); convertStr++)
		{
			if (tempStr[convertStr] >= 97 && tempStr[convertStr] < 122)
				tempStr[convertStr] -= 32;
		}

		//search title strings for key word
		//bool printed = false;
		if (searchTitle.find(tempStr, 0) != string::npos)
		{
			cout << ptrSearch->getTitle() << endl;
			cout << "ID code: " << ptrSearch->getIdCode() << endl;
			cout << std::fixed << std::showpoint << std::setprecision(2);
			cout << "price: $" << ptrSearch->getPrice() << endl;
			cout << ptrSearch->getDescription() << endl << endl;
			//prevent duplicate printouts
			printedTitle = true;
		}

		//search description strings for key word
		if (searchDesc.find(tempStr, 0) != string::npos && printedTitle == false)
		{
			cout << ptrSearch->getTitle() << endl;
			cout << "ID code: " << ptrSearch->getIdCode() << endl;
			cout << std::fixed << std::showpoint << std::setprecision(2);
			cout << "price: $" << ptrSearch->getPrice() << endl;
			cout << ptrSearch->getDescription() << endl << endl;
			printedDesc = true;
		}
		//message if search string not found
		if (printedTitle == false && printedDesc == false && searchProd == inventory.size()-1)
		{
			cout << "No matches found for " << str << endl << endl;
			
		}
		printedTitle = false;
		printedDesc = false;
	}
}

void Store::addProductToMemberCart(string pID, string mID)
{
	bool notFound = false;
	//checking to see if product or member id exists in system
	if (getProductFromID(pID) == NULL)
	{
		cout << "Product # " << pID << " not found\n";
		notFound = true;
	}

	if (getMemberFromID(mID) == NULL)
	{
		cout << "Member # " << mID << " not found\n";
		notFound = true;
	}
	if (notFound == false)
	{
		Product* ptrProd = getProductFromID(pID);
		Customer* ptrCust = getMemberFromID(mID);
		if (ptrProd->getQuantityAvailable() == 0)
			cout << "Sorry, product # " << pID << " is currently out of stock.\n";
		else ptrCust->addProductToCart(pID);
	}

}

void Store::checkOutMember(std::string mID)
{
	cout << std::fixed << std::showpoint << std::setprecision(2);
	double subtotal = 0.0;
	double shippingCost = 0.0;
	double cartTotal = 0.0;
	bool gone = false;

	Customer* checkoutMember = getMemberFromID(mID);
	Product* ptrProdCart;
	vector <string> checkoutCart = checkoutMember->getCart();
	for (int cartLoop = 0; cartLoop < checkoutCart.size(); cartLoop++)
	{
		ptrProdCart = getProductFromID(checkoutCart[cartLoop]);
		if (ptrProdCart->getQuantityAvailable() > 0)
		{
			cout << ptrProdCart->getTitle() << " - $"
				<< ptrProdCart->getPrice() << endl;
			ptrProdCart->decreaseQuantity();
			if (ptrProdCart->getQuantityAvailable() <= 0)
				gone = true;
			subtotal += ptrProdCart->getPrice();
		}
		if (ptrProdCart->getQuantityAvailable() <= 0)
			if (gone)
				gone = false;
			else
			{
				cout << "Sorry, product #" << ptrProdCart->getIdCode()
					<< ", \"" << ptrProdCart->getTitle()
					<< "\", is no longer available." << endl;
			}
	}

	//print out totals and empty members cart
	cartTotal = subtotal + shippingCost;
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Shipping Cost: $" << shippingCost << endl;
	cout << "Total: $" << cartTotal << endl;
	checkoutMember->emptyCart();
}