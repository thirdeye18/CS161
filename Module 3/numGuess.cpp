/*********************************************************************
** Author: Justin Hammel
** Date: 1/26/2017
** Description: Program prompts for an integer input, then user will attempt to guess first inputed value until correct value guessed
*********************************************************************/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int playerNumber, tries, playerGuess;

int main()
{
	cout << "Enter the number for the player to guess.\n";
	cin >> playerNumber;
	
	cout << "Enter your guess.\n";
	cin >> playerGuess;
	
	for (tries = 1; playerGuess != playerNumber; ++tries)
	{
		if (playerGuess > playerNumber)
		{
			cout << "Too high - try again.\n";
			cin >> playerGuess;
		}
		if (playerGuess < playerNumber)
		{
			cout << "Too low - try again.\n";
			cin >> playerGuess;
		}
	}
		
	cout << "You guessed it in " << tries << " tries." << endl;
	
	return 0;
}