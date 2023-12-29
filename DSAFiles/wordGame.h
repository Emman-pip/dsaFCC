#pragma once
#include <iostream>
#include <string>;
#include <cstdlib>
#include <time.h>

using namespace std;

class wordGame
{
private:
	string lol[6] = { "hello", "world", "guess", "pogi", "emman", "hehe"};
	string randomWord;
	int tries = 13;
	string name;
public:
	wordGame() 
	{
		srand(time(NULL));
		const int number = rand() % (sizeof(this->lol) / sizeof(string));
		randomWord = this->lol[number];
	}
	void game()
	{
		string line = "-";
		int lenOfWord = this->randomWord.length();
		string word;

		for (int i = 0; i < lenOfWord; i++)
		{
			word += line;
		}
		char guess = ' ';


		while (true)
		{
			if (tries == 0)
			{
				cout << "You lost!";
				return;
			}
			cout << " Guess the word. (" << this->tries << " tries left)" << endl;
			for (int i = 0; i < lenOfWord; i++)
			{
				if (guess == this->randomWord[i])
				{
					word[i] = guess;
				}
				cout << word[i] << endl;
			}

			cout << "\n";
			
			if (this->randomWord == word)
			{
				break;
			}
			cout << "Enter a character: ";
			cin >> guess;
			this->tries--;
		}
		cout << "Congratulations, " << this->name << ". You won!" <<  endl;
	}

	void display() 
	{

		cout << "\nWhat is your name? ";
		cin >> this->name;
		cout << "Goodluck, " << this->name << "!" << endl;
		game();
	}
	
};