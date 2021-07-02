/*********************************************************************
** Author: Justin Hammel
** Date: 3/1/2017
** Description: Header file that defines interface of the Student
**				class.
*********************************************************************/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

using std::string;

class Student
{
private:
	string name;
	double score;

public:
	//Constructors
	Student();
	Student(string, double);
	
	//Accessors
	string getName();
	double getScore();
};

#endif