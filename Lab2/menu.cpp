#include <iostream>
#include <string>

#include "io.h"

#include "menu.h"

#include "menu_search.h"

void display_menu(vector <User>* users){


	while (true) {

		string input;

		cout << "                    MAIN MENU" << endl << endl
			<< "1. To SEARCH by fields" << endl
			<< "2. To REMOVE fields" << endl
			<< "3. EXIT" << endl;

		cin >> input;

		if (is_integer(input) == false) {
			cout << "Need to enter an integer number! Please, try again: " << endl;
			continue;
		}

		int chooseOperation = stoi(input);

		switch (chooseOperation){
			case 1:
				cout << "To SEARCH by fields" << endl;
				menu_search(users);
			break;
			case 2:
				//cout << "REMOVE by fields" << endl;
				//menu_remove();

			break;
			case 3:
				cout << "Thank you! Bye!" << endl;
				exit;
			break;
		}
	}
}
