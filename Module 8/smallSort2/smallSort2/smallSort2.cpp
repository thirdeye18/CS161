/*********************************************************************
** Author: Justin Hammel
** Date: 3/1/2017
** Description: Function that takes the adresses of three int values 
** and sorts the values at those adresses from smallest to largest
*********************************************************************/

void smallSort2 (int* a, int* b, int* c)
{
	//set up temporary storage space for number while sorting
	int temp;
	if (*a > *b)
	{
		temp = *b;
		*b = *a;
		*a = temp;
	}
	if (*a > *c)
	{
		temp = *c;
		*c = *a;
		*a = temp;
	}
	if (*b > *c)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}
}