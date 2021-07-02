/*********************************************************************
** Author: Justin Hammel
** Date: 3/9/2017
** Description: Header file that defines interface of the Board class.
*********************************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

enum Status { X_WON, O_WON, DRAW, UNFINISHED };

class Board
{
private:
	char boardLayout[3][3];

public:
	Board();
	bool makeMove (int, int, char);
	Status gameState();
	void print();
	bool boardFull();
};

#endif