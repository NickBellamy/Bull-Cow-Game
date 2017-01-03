#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

//Entry point for application
int main()
{
	PrintIntro();

	GetGuessAndPrintBack();

	cout << endl;
	return 0;
}

//Introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n\n";
	return;
}

//Get a guess from the player
string GetGuessAndPrintBack()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	//Print the guess back to player
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}