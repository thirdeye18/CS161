/*********************************************************************
** Author: Justin Hammel
** Date: 2/2/2017
** Description: Function that sorts three reference int values from 
				smallest to largest
*********************************************************************/

void smallSort(int &a, int &b, int&c)
{
	//set up temporary storage space for number while sorting
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