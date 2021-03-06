// COMP140-DebugExercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//Character Stats class, this could be declared in another file!
class CharacterStats
{
public:
	CharacterStats()
	{
		Name = "Name";
		Age = 10;
		Health = 19;
		Score = 0;
	}
	~CharacterStats()
	{

	}
	
	//Everything public! Bad, make sure its private
	//and we use functions to access!
	std::string Name;
	int Age;
	int Health;
	int Score;

};

//Function taking in character stats by value
void TakeDamagePassedByValue(CharacterStats character,int damage)
{
	character.Health -= damage;
}

//Function taking in character stats by reference
void TakeDamagePassedByRef(CharacterStats &character, int damage)
{
	character.Health -= damage;

}

//Function taking in character stats by pointer
void TakeDamagePassedByPointer(CharacterStats *character, int damage)
{
	character->Health -= damage;
}

int main()
{
	CharacterStats stats;
	stats.Age = 30;
	stats.Name = "Brian";
	stats.Health = 100;
	stats.Score = 0;

	//Q1 What is the value for health after this function has been called? 100
	TakeDamagePassedByValue(stats, 10);

	//Q2 What is the value for health after this function has been called? 80
	TakeDamagePassedByPointer(&stats, 20);

	//Q3 What is the value for health after this function has been called? 35
	TakeDamagePassedByRef(stats, 45);
    return 0;
}

