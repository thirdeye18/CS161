/*********************************************************************
** Author: Justin Hammel
** Date: 3/2/2017
** Description: Main for testing the smallSort2 function
*********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void smallSort2(int* a, int* b, int* c);

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	smallSort2(&a, &b, &c);

	cout << a << ", " << b << ", " << c << endl;

	cout << "Enter three integer values \n";
	cin >> a;
	cin >> b;
	cin >> c;
		
	smallSort2(&a, &b, &c);
	
	cout << a << ", " << b << ", " << c << endl;

	return 0;
}