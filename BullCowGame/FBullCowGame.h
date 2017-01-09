#pragma once
#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame
{
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //TODO make a more rich return value.
	bool CheckGuessValidity(FString); //TODO make a more rich return value.	
	// provide a method for counting bulls & cows, and increasing try number


// please try and ignore this for now, and focus on the interface above.
private:
	// see constructor for initialization.
	int32 MyCurrentTry;
	int32 MyMaxTries;
};