

#include "stdafx.h"
#include <iostream>
#include <ctime> 
#include <cstring> 
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int choice;
	char choice2;
	srand(time(0));
	string first[52] = { "Atticus",

		"Fuzzy",

		"Penelope", 

		"Richie",

		"Blue",

		"Sprinkles",

		"Penny",

		"Bumper",

		"Spotty",

		"Lola",

		"Honey",

		"Pumpkin",

		"Bean",

		"Humphrey",

		"April",

		"Ginger",

		"Einstein",

		"Kirara",

		"Momo",

		"Jiji",

		"Mimi",

		"Alexander",

		"Artemis",

		"Happy",

		"Tony",

		"Dave",

		"Buttons",

		"Muffin",

		"Pepper",

		"Cookie",

		"Patches",

		"Rose",

		"Peanut",

		"Daisy",

		"Wally",

		"Zero",

		"Wolfie",

		"Strawberry",

		"Peaches",

		"Blossom",

		"Ruby",

		"Cooper",

		"Rufus",

		"Thumper",

		"Timmy",

		"Akira",

		"Kira",

		"Laney",

		"Missy",

		"Bella",

		"Tootie",

		"Ralph" };
	cout << "Welcome to the stuffie name generator!" << endl;
	cout << "You must be here because you got a new stuffie! How exciting! Be sure to thank whoever got it for you" << endl;
	cout << "Now let's get started!!" << endl << endl;
	cout << "1. I'd like a name for my stuffie please!" << endl;
	cout << "2. I don't need a name for my stuffie!" << endl;
	cin >> choice;
	if (choice == 1)
		cout << endl << first[rand() % 52] << endl << endl;
	else
	{
		cout << endl << "Hope to see you again soon!" << endl << endl;
		exit(EXIT_FAILURE);
	}
	do
	{
		cout << "Are you happy with your new stuffie's name?" << endl;
		cout << "Please enter 'Y' for yes or 'N' for no" << endl;
		cin >> choice2;
		cout << endl;
		if (choice2 == 'N')
		{
			cout << "Here's a new one for ya!" << endl;
			cout << first[rand() % 50] << endl << endl;
		}
		else
		{
			cout << "I'm very happy for you and your new stuffie!" << endl << endl;
		}
		
	} while (choice2 != 'Y');


	/*
		do
		{
			// menu
			cout << "1. I'd like a name for my stuffie please!" << endl;
			cout << "2. I'm happy with my new stuffie name!" << endl;
			cin >> choice;
			
			cout << endl << first[rand() % 50] << endl << endl;
		} while (choice != 2); */
		
	
}