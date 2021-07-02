/*********************************************************************
** Author: Justin Hammel
** Date: 3/9/2017
** Description: Implementation and main of the Tic Tac Toe Game.  
**				Default constructor clears player turn variable, or 
**				overloaded constructor will accept value for player
**				turn.  Play function starts game asking for player
**				moves until a winner is determined.
*********************************************************************/

#include <iostream>

#include "TicTacToe.hpp"
#include "Board.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char turn = ' ';
	cout << "Welcome to my C++ Tic Tac Toe!\n";
	cout << "Who will play first, X, or O? ";
	
	//validate initial char input and format to capital X or O
	while (turn == ' ')
	{
		cin >> turn;
		if (turn == 'x') 
			turn = 'X';
		if (turn == 'o') 
			turn = 'O';
		if (turn != 'X' && turn != 'O')
		{
			cout << "Please enter X or O for the starting player";
			turn = ' ';
		}
		cout << turn << " will play first.\n";
	}
	
	//start the game
	TicTacToe tttGame(turn);
	Board tttBoard;
	Board* ptrBoard[1] = { &tttBoard };
	tttGame.play (*ptrBoard);

	return 0;
}

TicTacToe::TicTacToe()
{
	playerTurn = ' ';
}

TicTacToe::TicTacToe(char turnTTT)
{
	playerTurn = turnTTT;
}

void TicTacToe::play(Board *gameIn)
{
	
	//establish storage values for player moves
	int tempX = 0, 
		tempY = 0;
	
	//loop game until winner determined
	Status currentState = UNFINISHED;
	while (currentState == UNFINISHED)
	{
		cout << "Player " << playerTurn << " input row and then ";
		cout << "move coordinates (first row/col is 0).\n";
		cin >> tempX >> tempY;

		//determine if a valid move was made
		bool validMove = false;
		while (!(validMove))
		{
			validMove = gameIn->makeMove(tempX, tempY, playerTurn);
			if (!validMove)
			{
				cout << "That square is occupied,\n";
				cout << "please make another move.\n";
				cin >> tempX >> tempY;
			}
		}

		//check for a winning combo
		currentState = gameIn->gameState();

		//swap between players following valid move
		if (playerTurn == 'X')
			playerTurn = 'O';
		else if (playerTurn == 'O')
			playerTurn = 'X';
		
		//print the game board
		gameIn->print();
		
		//determine if board is full and draw can be called
		bool gameOver = gameIn->boardFull();
		if (gameOver)
			currentState = gameIn->gameState();
		if (currentState == UNFINISHED && (gameOver))
			currentState = DRAW;
		
		//output results of the game
		if (currentState == X_WON)
			cout << "X has won the game" << endl;
		if (currentState == O_WON)
			cout << "O has won the game" << endl;
		if (currentState == DRAW)
			cout << "The game is a draw" << endl;
	}
}
