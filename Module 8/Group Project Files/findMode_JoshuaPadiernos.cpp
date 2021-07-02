/*********************************************************************
** Author: Joshua Padiernos
** Date: Feb 22, 2017
** Description: This function takes parameters as an array of int
* and the size of the array, and returns a vector containing the
* mode(s), sorted in ascending order.
*********************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

std::vector<int> findMode (int array[], int size)
{
  vector<int> modes;
  int arrayFound[size];
  int arrayCount[size];
  int numTop = 0;
  int numTopPosition = 0;

  for (int i=0; i<size; i++)
  {
    arrayFound[i] = 0;
    arrayCount[i] = 0;
  }

  for (int i=0; i<size; i++)
  {
    bool num = false;
    for (int k=0; k<size; k++)
    {
      if(arrayFound[k] == array[i])
      {
        num = true;
      }
    }
    if(num == false)
    {
      arrayFound[i] = array[i];
    }
  }

  for (int i=0; i<size; i++)
  {
    for (int k=0; k<size; k++)
    {
      if(arrayFound[i] == array[k])
      {
        arrayCount[i]++;
      }
    }
  }

  for (int i=0; i<size; i++)
  {
    if(arrayCount[i] > numTop)
    {
      numTop = arrayCount[i];
      numTopPosition = i;
    }
  }

  for (int i=0; i<size; i++)
  {
    if(arrayCount[i] == numTop)
    {
      modes.push_back (arrayFound[i]);
    }
  }

  sort(modes.begin(), modes.end());

  return modes;
}

