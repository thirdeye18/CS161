/*********************************************************************
** Author: Justin Hammel
** Date: 3/1/2017
** Description: Function that takes an array of pointers to students
**				as an argument and the size of the array.  It will 
**				calculate and return the population standard deviation
**				of the student test scores.          
*********************************************************************/
#include <iostream>
#include <cmath>

#include "Student.hpp"

double stdDev(Student *studentsPtr[], int size)
{
//initialize variables to hold different math items
	double standardDeviation(0.0),
			populationMean(0.0),
			sumStudentScore(0.0),
			sumScoreMinusMean(0.0);
	
	//get the sum of the scores in the student array
	for (int count = 0; count < size; count++)
		sumStudentScore += studentsPtr[count]->getScore();
	
	//find the average of the scores in the array
	populationMean = sumStudentScore / size;
	
	//calculate the standard deviation
	for (int count2 = 0; count2 < size; count2++)
		sumScoreMinusMean += pow((studentsPtr[count2]->
		getScore() - populationMean), 2.0);
	
	standardDeviation = sqrt(sumScoreMinusMean / size);

	return standardDeviation;
}