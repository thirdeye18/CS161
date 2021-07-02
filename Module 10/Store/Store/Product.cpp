/*********************************************************************
**
** Author: Hammel, Justin T
**
** Date: 3/17/17
**
** Description: This is the implementation of the Product class.
**		There is a constructor which takes strings for id
**		code, title, and description a double for price, and
**		an integer for quantity.  There are getters for each
**		of these parameters as well.  There is also a method
**		to adjust the quantity of the Product objects.
**
*********************************************************************/

#include <iostream>
#include <string>

#include "Product.hpp"

using std::string;
using std::cout;
using std::endl;

Product::Product(std::string id, std::string t, std::string d, double p, int qa)
{
	idCode = id;
	title = t;
	description = d;
	price = p;
	quantityAvailable = qa;
}

string Product::getIdCode()

{
	return idCode;
}

string Product::getTitle()
{
	return title;
}

string Product::getDescription()
{
	return description;
}

double Product::getPrice()
{
	return price;
}

int Product::getQuantityAvailable()
{
	return quantityAvailable;
}

void Product::decreaseQuantity()
{
	quantityAvailable--;
}