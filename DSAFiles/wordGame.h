#pragma once
#include <iostream>
#include <string>;
#include <cstdlib>

using namespace std;

class wordGame
{
private:
	string lol[3] = { "hello", "world", "guess" };
	string randomWord;
public:
	wordGame() 
	{
		const int number = rand() % (sizeof(this->lol) / sizeof(string));
		cout << this->lol[number] << endl;
		randomWord = this->lol[number];
	}

	void game()
	{

	}
	void display() 
	{
		string name;
		cout << "\nWhat is your name?";
		cin >> name;
		cout << "Goodluck, " << name << "!" << endl;
	}
	
};