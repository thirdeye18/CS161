/*********************************************************************
** Author: Justin Hammel
** Date: 3/9/2017
** Description: Header file that defines interface of the TicTacToe
**				class.
*********************************************************************/
#include "Board.hpp"

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

class TicTacToe
{
private:
	Board currentGame;
	char playerTurn;
public:
	TicTacToe();
	TicTacToe(char);
	void play(Board *gameIn);
};

#endif