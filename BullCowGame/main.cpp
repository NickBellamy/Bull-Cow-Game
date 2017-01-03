#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n\n";

	//Get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);

	//Repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;

	return 0;
}