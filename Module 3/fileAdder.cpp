/*********************************************************************
** Author: Justin Hammel
** Date: 1/26/2017
** Description: Program reads the input file and then sums the values and outputs the sum to another txt file
*********************************************************************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputFile;
	ofstream outputFile; //setup and open input and output file
	string fileName,
			sum = "sum.txt";
	int value,
		fileSum = 0;
	
	cout << "Enter file name to read from: \n"; //ask for file name
	cin >> fileName;
	
	//if (fileName != "input.txt")
	//{
	//	cout << "could not access file";
	//}
	
	inputFile.open(fileName); //opens file
	
	while (inputFile >> value) //adds all values to the sum variable
	{
		fileSum += value;
	}
	
	outputFile.open(sum);
	outputFile << fileSum; //move variable to the sum.txt file
	
	inputFile.close(); //closing both files
	outputFile.close();
	
	return 0;
}
