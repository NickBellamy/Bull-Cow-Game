#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

//Entry point for application
int main()
{
	PrintIntro();

	//Loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		GetGuessAndPrintBack();
		cout << endl;
	}
	
	return 0;
}


void PrintIntro()
{
	//Introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n\n";
	return;
}


string GetGuessAndPrintBack()
{
	//Get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	//Print the guess back to player
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}