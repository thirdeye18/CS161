/*
*NAME: Stephanie Smith
*DATE: 2.8.2017
*NOTES: Assignment 7 creating a function (findMode) that goes through an array,
* finds the most often found numbers and returns them as a vector
*/
//#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


//create vector function, as it returns a vector. Inputs are an Integer Array and Integer of size
vector<int> findMode(int array[], int size) {
	vector<int> resultVector, tempVector;
	//set variables
	int tempFreq = 0, maxFreq = 0;
	//for loop to calculate the maximum frequency found -- works
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (array[i] == array[j]) {
				tempFreq++;
			}
			if (tempFreq > maxFreq)
				maxFreq = tempFreq;
		}
		tempFreq = 0;
		tempVector.push_back(array[i]);
	}
	//check the frequency found
	//std::cout << maxFreq << endl;
	//for loop to put the values into the new vector
	for(int k = 0; k < size; k++) {
		tempFreq = 0; //reset the frequency
		for (int l = 0; l < size; l++) {
			if (array[k] == array[l]) {
				tempFreq++;
			}
			if (maxFreq == tempFreq) {//ensures the frequency is the max before putting in new value
				resultVector.push_back(array[k]);
				tempFreq++;//increases the tempFreq so it doesn't continue to put in the same value
			}
		}
	}
std::sort(resultVector.begin(), resultVector.end()); //sort the vector from smallest to largest
return resultVector; //return the vector
}

/*
int main()
{
	//input arrays
	int array1[12] = {1,2,4,3,7,5,3,7,6,10,9,1}; //should output 1,1,3,3,7,7
	int numbers2[8] = {0,1,9,4,5,-1,7,2}; //should output all numbers -1,0,1,2,4,5,7,9

	vector<int> finalVector;
	finalVector = findMode(array1, 12);
	std::cout << "\nThe modes found for array1: ";
	for (int i = 0; i < finalVector.size(); i++)
	{
		std::cout << finalVector[i] << ", "; //printing vector .
	}
	//vector 2
	finalVector = findMode(numbers2, 8);
	std::cout << "\nThe modes found for the array2: ";
	for (int j = 0; j < finalVector.size(); j++)
	{
		std::cout << finalVector[j] << " ,"; //print vector
	}
	return 0;
}
*/