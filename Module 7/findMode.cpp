/*********************************************************************
** Author: Justin Hammel
** Date: 2/22/2017
** Description: The findMode function accepts an int array as an 
				argument determining what the mode of those values is
				then returns the mode values as a vector. The result 
				vector will return the mode in ascending order.  The 
				findMode function also has calls to the 
				frequencyVector and highestFrequency helper functions.
*********************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

/* declaring userNumbers as alias for int array type to pass array 
to function */
typedef int userNumbers [];

std::vector <int> frequencyVector (const userNumbers, int);
int highestFrequency (const userNumbers, int);
std::vector <int> findMode (const userNumbers, int);

/*********************************************************************
** Description: This function accepts an array and it's size as
** constant parameters. It then uses a loop to determine how many
** times each value shows up in the array.  The tally of how many
** occurences there are is stored in a vector placeholder
** corresponding to the array values original spot.  If the number
** has already been tallied a zero is stored instead for subsequent
** occurences.
**
*********************************************************************/

std::vector <int> frequencyVector (const userNumbers numbersIn, 
int size)
{
/*vector used to store the frequency each value in the array appears 
with a space for each spot in the array initialized to zero to ensure
placeholder exists for every value coresponding to original array*/
	
	std::vector <int> countFrequency;
	for (int initial = 0; initial < size; initial++)
		countFrequency.push_back (0);

/*The following loops to count how many times each value in the array 
show up, but only puts highest value in first time number appears
duplicates of the first appearance have a zero in the placeholder*/

	for (int count = 0; count < size; count++) 
	{
  
		int found = 0;
		int tally = 0;
		for (int count2 = 0; count2 < count; count2++)
		{
			if (numbersIn[count] == numbersIn[count2]) 
			found++;
		}

		if (found == 0) 
		{
			tally = 1;

			for (int count2 = count + 1; count2 < size; count2++) 
			{
				if (numbersIn[count] == numbersIn[count2]) 
				tally ++;
			}
			countFrequency [count] = tally;
		}
	}
		return countFrequency; 
	}


/*********************************************************************
** Description: This function accepts an array and its size as 
** constant parameter.  It calls the frequencyVector function using
** these same parameters.  Once the frequency is known this function
** will compare the values and return as an int whichever frequency
** value from the frequencyVector is highest.
**
*********************************************************************/

int highestFrequency (const userNumbers numbersIn, int size)
{
	std::vector <int> whatIsHighest (frequencyVector (numbersIn, size));
	
	//sort vector to find highest count
	std::sort(whatIsHighest.begin(), whatIsHighest.end());
	int highestSize = whatIsHighest.size ();
	int highestCount = whatIsHighest.at (--highestSize);
	
	return highestCount;
}

/*********************************************************************
** Description: This function accepts an array and its size as 
** constant parameter.  It uses these same parameters to call both the 
** frequencyVector and the highestFrequency functions.  It uses the 
** values returned from these to find the mode of the array sent as 
** a parameter.
**
*********************************************************************/

std::vector <int> findMode (const userNumbers numbersIn, int size)
{	
	int highestCount = highestFrequency (numbersIn, size);
	
	std::vector <int> countedFrequency 
	(frequencyVector (numbersIn, size));
	
	//create vecto to hold results
	std::vector <int> results;
	
/* 	moves mode values to results only if frequency matches highest
	count zeroes in placeholder are ignored*/
	for (int index = 0; index < size; index ++)
	{
		if (countedFrequency [index] == highestCount)
		{
			results.push_back (numbersIn [index]);
		}
	}
	
	//sort the vector into ascending order prior to returning
	std::sort(results.begin(), results.end());
	
	return results;
}
