#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

#include "Student.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::setw;
using std::fixed;
using std::showpoint;
using std::setprecision;

double stdDev(Student *studentsPtr[], int);

int main()
{
	//Create an array using a constant for size to hold student objects
	int const CLASS_SIZE = 5;
	Student student1("Tom", 98.0);
	Student student2("Jen", 87.0);
	Student student3("Bob", 80.0);
	Student student4("Jet", 91.0);
	Student student5("Liz", 98.0);
	Student *ptrArray[CLASS_SIZE] = {&student1, &student2, &student3, &student4, &student5};

	//setting up seed for generating random scores to fill array
	//unsigned seed = time(0);
	//srand(seed);

	//setting up limits for random scores generated
	//int maxScore = 100;
	
	//initializing variables for input into the array
	//int randScore = 0;
	//string enterName = "";
	
	//fill studentArray with names and random scores
	//for (int index = 0; index < CLASS_SIZE; index++)
	//{
	//	cout << "Please enter students names: \n";
	//	getline(cin, enterName);
	//	randScore = (rand() % (maxScore - 50 + 1)) + 50;
	//	studentArray[index] = {Student(enterName, randScore)};
	//}

	cout << "Here are the sudents and test scores. \n";

	//display array contents
	for (int index = 0; index < CLASS_SIZE; index++)
	{
		cout << ptrArray[index]->getScore() << setw(10) << ptrArray[index]->getName() << endl;
	}

	//Display the standard deviation
	double deviation = stdDev(ptrArray, CLASS_SIZE);
	cout << endl;
	cout << "The standard deviation of the scores is: " << deviation << endl;

	return 0;
}