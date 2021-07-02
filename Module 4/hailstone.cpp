/*********************************************************************
** Author: Justin Hammel
** Date: 2/2/2017
** Description: Function that determines number of steps required to 
				reach one in a hailstone sequence 
*********************************************************************/

int hailstone (int startingNumber)
{
	int stepsTaken;
	//Run program until startingNumber is equal until 1 keeping a 
	//counter of the number of times he program runs
	for (stepsTaken = 0; startingNumber != 1; stepsTaken++)
	{
	//If even divide the number by 2
	if (startingNumber % 2 == 0)
		startingNumber /= 2;
	//If number is odd multiply the number by 3 and add 1
	else 
		startingNumber = startingNumber * 3 + 1;
	}
	return stepsTaken;
}