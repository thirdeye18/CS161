#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

#include "Store.hpp"

using std::vector;
using std::cout;
using std::string;
using std::endl;
using std::setw;
using std::getline;
using std::cin;

int main()
{
	Store testStore;

	//testing product object creation and adding to store
	Product* ptrProduct = NULL;
	ptrProduct = new Product("123", "Test 123", "This is test product 123", 3.5, 5);
	testStore.addProduct(ptrProduct);
	Product product2("321", "Test 321", "This is test product 321", 1.99, 1);
	testStore.addProduct(&product2);
	ptrProduct = new Product("124", "Test 124", "This is a test for out of stock", 0.75, 0);
	testStore.addProduct(ptrProduct);
	ptrProduct = NULL;

	//test customer object creation
	Customer *ptrCustomer = NULL;
	ptrCustomer = new Customer("John Member", "12345", true);
	testStore.addMember(ptrCustomer);
	ptrCustomer = new Customer("Nohn Member", "12346", false);
	testStore.addMember(ptrCustomer);
	ptrCustomer = NULL;

	/*	cout << "Welcome to the store" << endl;
	cout << "The store contains the following items:\n";
	cout << std::fixed << std::showpoint << std::setprecision(2);

	//output values for created objects
	//Testing getProductIdFunction
	ptrProduct = testStore.getProductFromID("123");
	//testing getters for Product class
	cout << "Item " << ptrProduct->getIdCode() << "  "
		<< ptrProduct->getTitle() << endl
		<< ptrProduct->getDescription()
		<< "  $" << setw(5) << ptrProduct->getPrice()
		<< "  qty:" << ptrProduct->getQuantityAvailable() << endl;
	
	//outputing second created product
	ptrProduct = testStore.getProductFromID("321");
	cout << "Item " << ptrProduct->getIdCode() << "  "
		<< ptrProduct->getTitle() << endl
		<< ptrProduct->getDescription()
		<< "  $" << setw(5) << ptrProduct->getPrice()
		<< "  qty:" << ptrProduct->getQuantityAvailable() << endl;

	//outputing third created product
	ptrProduct = testStore.getProductFromID("124");
	cout << "Item " << ptrProduct->getIdCode() << "  "
		<< ptrProduct->getTitle() << endl
		<< ptrProduct->getDescription()
		<< "  $" << setw(5) << ptrProduct->getPrice()
		<< "  qty:" << ptrProduct->getQuantityAvailable() << endl;*/

	/*//output customer object data for test
	//testing getMemberFromId function
	
	cout << "The stores customers id and member status are:\n";
	ptrCustomer = testStore.getMemberFromID("12345");
	cout << "Member number " << (testStore.getMemberFromID("12345"))->getAccountID() << " Premium status " <<
		(testStore.getMemberFromID("12345"))->isPremiumMember << endl;
	
	ptrCustomer = testStore.getMemberFromID("12347");
	//if/else loop to prevent program crash from NULL ptr return
	if (ptrCustomer == NULL)
		cout << "Member ID "<< 12347 << "Not Found" << endl;
	else
		cout << setw(7) << ptrCustomer->getAccountID() << "Premium status " <<
			ptrCustomer->isPremiumMember() << endl;
	ptrCustomer = NULL;*/

	/*//testing search function with while loop, type exit to break
	string testSearch;
	while (testSearch != "exit")
	{
		cout << "Enter item description or name to search for.\n";
		getline(cin, testSearch);
		testStore.productSearch(testSearch);
	}*/

	//testing checkout
	testStore.addProductToMemberCart("124", "12345");
	testStore.addProductToMemberCart("000", "12345");
	testStore.addProductToMemberCart("124", "0000");
	testStore.addProductToMemberCart("321", "12345");
	testStore.addProductToMemberCart("321", "12345");
	testStore.addProductToMemberCart("123", "12345");
	testStore.checkOutMember("12345");

	return 0;
}