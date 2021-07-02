/*********************************************************************
** Author: Justin Hammel
** Date: 3/1/2017
** Description: Implementation of the Student class.  Contains a 
**				default constructor to initialize name and score to  
**				blank values. It can also set these values to a user
**				string and double value.  There are also getters to 
**				return the student name and score.          
*********************************************************************/
#include <string>

#include "Student.hpp"

using std::string;

Student::Student()
{
	name = "";
	score = 0.0;
}

Student::Student(string nameIn, double scoreIn)
{
	name = nameIn;
	score = scoreIn;
}

string Student::getName()
{
	return name;
}

double Student::getScore()
{
	return score;
}
