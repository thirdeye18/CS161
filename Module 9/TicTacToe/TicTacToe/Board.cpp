/*********************************************************************
** Author: Justin Hammel
** Date: 3/9/2017
** Description: Implementation of the Board class.  Contains a
**				default constructor to initialize the boardLayout
**				array to zero values. There is a method to accept
**				user move input in the form of an x, y coordinate.
**				bool values will be used to validate user input
**				returning either true or false if valid move is made.
**				There is a method for determining game state that 
**				an enumerated variable if X or O wins, otherwise
**				Unfinished will be returned.  There is also a method
**				count used spaces in the board to determine if a 
**				draw may be declared.
*********************************************************************/

#include <iostream>

#include "Board.hpp"

using std::cout;
using std::endl;

Board::Board()
{
	for (int initRow = 0; initRow < 3; initRow++)
	{
		for (int initCol = 0; initCol < 3; initCol++)
		{
			boardLayout[initRow][initCol] ='.';
		}
	}
}

bool Board::makeMove(int x, int y, char player)
{
	if (boardLayout[x][y] != '.')
		return false;
	else
		boardLayout[x][y] = player;
	return true;
}

Status Board::gameState()
{

	for (int step = 0; step < 3; step++)
	{
		//checking for x column win
		if (boardLayout[0][step] == 'X' &&
			boardLayout[1][step] == 'X' &&
			boardLayout[2][step] == 'X')
			return X_WON;

		//checking for o column win
		if (boardLayout[0][step] == 'O' &&
			boardLayout[1][step] == 'O' &&
			boardLayout[2][step] == 'O')
			return O_WON;

		//checking for x row win
		if (boardLayout[step][0] == 'X' &&
			boardLayout[step][1] == 'X' &&
			boardLayout[step][2] == 'X')
			return X_WON;

		//checking for o row win
		if (boardLayout[step][0] == 'O' &&
			boardLayout[step][1] == 'O' &&
			boardLayout[step][2] == 'O')
			return O_WON;
	}
	//checking for diagonal left x win
	if (boardLayout[0][0] == 'X' &&
		boardLayout[1][1] == 'X' &&
		boardLayout[2][2] == 'X')
		return X_WON;

	//checking for diagonal left o win
	if (boardLayout[0][0] == 'O' &&
		boardLayout[1][1] == 'O' &&
		boardLayout[2][2] == 'O')
		return O_WON;

	//checking for diagonal right x win
	if (boardLayout[2][0] == 'X' &&
		boardLayout[1][1] == 'X' &&
		boardLayout[0][2] == 'X')
		return X_WON;

	//checking for diagonal right o win
	if (boardLayout[2][0] == 'O' &&
		boardLayout[1][1] == 'O' &&
		boardLayout[0][2] == 'O')
		return O_WON;
	
	return UNFINISHED;
}

void Board::print()
{
	cout << "  0 1 2\n";
	
	//print first row of board
	cout << "0 ";
	for (int pcol = 0; pcol <= 2; pcol++)
		cout << boardLayout[0][pcol] << " ";

	//print second row of board	
	cout << "\n1 ";
	for (int pcol = 0; pcol <= 2; pcol++)
	{
		cout << boardLayout[1][pcol] << " ";
	}

	//print third row of board
	cout << "\n2 ";
	for (int pcol = 0; pcol <= 2; pcol++)
	{
		cout << boardLayout[2][pcol] << " ";
	}
	cout << endl;
}

bool Board::boardFull()
{
	int finishCount = 0;
	for (int countCol = 0; countCol < 3; countCol++)
		for (int countRow = 0; countRow < 3; countRow++)
		{
			if (boardLayout[countRow][countCol] == '.')
			finishCount++;
		}
	if (finishCount == 0)
		return true;
	else return false;
}

