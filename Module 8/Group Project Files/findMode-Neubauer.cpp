/*******************************************************************************
**  Author: John Neubauer - 933053120
** Date 2/20/17
** Description: This is the findMode function that takes an array of int's and
**		an integer of the array length as arguments, finds the highest
**		frequency of duplicates, writes them to and returns a vector.
**		If no duplicates exist, return the original array in a vector.
**		The returned vector is sorted in ascending order.
*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector <int> findMode(int[], int);

/*
int main ()
{
	int arrSize = 20;
	int arr[20] = {4,2,5,4,5,4,2,5,4,5,4,2,5,4,5,4,5,5,4,5};

	vector <int> result;

	result = findMode(arr, arrSize);

	cout << "Vector contains:";
	for (int i=0; i <result.size(); i++)
		cout << " " << result[i];
		cout << endl << endl;

	return 0;
}
*/

vector <int> findMode(int arrIn[], int arrSize)
{
	vector <int> matchVect;
	int match = 1, repeatMatch = 1, total = 1;
	bool exist = false, empty = true;

	// Check for most frequent matches
	for (int i=0; i < arrSize - 1; i++)
	{
		for(int j=i+1; j < arrSize; j++)
		{
			if (arrIn[i] == arrIn[j])
			{
				match++;
				if (match > total)
					total = match;
			}
		}
		match = 1;
	}	

	// Check if new matches=total, then push to vector
	for (int i=0; i < arrSize - 1; i++)
	{
		for(int j=i+1; j < arrSize; j++)
		{
			if (arrIn[i] == arrIn[j])
			{
				repeatMatch++;
				// Check if record exists in vector
				// If !exist push to vector
				if (repeatMatch == total)
				{
					for (int k=0; k < matchVect.size(); k++)
				 	{
						if (arrIn[i] == matchVect[k])
							exist = true;
					}
					if (!exist)
					{
						matchVect.push_back(arrIn[i]);
						empty = false;
					}
				}
			}
			exist = false;
		}
		repeatMatch = 1;
	}		

	// If there are no matches, copy array into vector
	if (empty)
	{
		for (int i=0; i < arrSize; i++)
		{
			matchVect.push_back(arrIn[i]);
		}
	}

	// Sort the vector
	std::sort(matchVect.begin(), matchVect.end());


	return matchVect;
}
