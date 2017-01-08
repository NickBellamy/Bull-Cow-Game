#include <iostream>
#include <string>
#include "FBullCowGame.h"


void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame;


//Entry point for application
int main()
{
	do
	{
		PrintIntro();
		PlayGame();
	} 
	while (AskToPlayAgain());
	
	return 0;
}


void PrintIntro()
{
	//Introduce the game
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n\n";
	return;
}


void PlayGame()
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();

	//Loop for the number of turns asking for guesses
	for (int count = 1; count <= MaxTries; count++)
	{
		std::string guess = GetGuess();
		std::cout << "You guessed: " << guess << std::endl;
		std::cout << std::endl;
	}
}


std::string GetGuess()
{
	int CurrentTry = BCGame.GetCurrentTry();
	//Get a guess from the player
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n) ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
