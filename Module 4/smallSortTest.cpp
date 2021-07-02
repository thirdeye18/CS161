/*********************************************************************
** Author: Justin Hammel
** Date: 2/2/2017
** Description: Program to call function that sorts three reference int values from smallest to largest
*********************************************************************/
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void smallSort(int &a, int &b, int&c);

//using int main() for testing function

/* int main()
{
	int a, b, c;

	cout << "Enter three integer values \n";
	cin >> a >> b >> c;
	smallSort (a, b, c);
	cout << a << ", " << b << ", " << c << endl;
	return 0;
} */
/*********************************************************************
** Description: Function sorts three integers from smallest to largest using reference int variables
**
*********************************************************************/
void smallSort(int &a, int &b, int&c)
{
	int temp;
	if (a > b)
	{
		temp = b;
		b = a;
		a = temp;
	}
	if (a > c)
	{
		temp = c;
		c = a;
		a = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;		
	}
}