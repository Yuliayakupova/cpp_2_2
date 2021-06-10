#include <iostream>
#include "io.h"
#include "display.h"

#include "menu_remove.h"

using namespace std;

void menu_remove(vector <User>* users) {
	while (true) {

		string input;

		cout << "                    REMOVE MENU" << endl << endl
			<< "1. By Surname" << endl
			<< "2. By ID Number" << endl
			<< "3. RETURN to MAIN MENU" << endl;


		cin >> input;

		if (is_integer(input) == false) {
			cout << "Need to enter an integer number! Please, try again: " << endl;
			continue;
		}

		int chooseOperation = stoi(input);

		switch (chooseOperation) {
		case 1:
			remove_by_surname(users);
			break;
		case 2:
			remove_by_id(users);
			break;
		case 3:
			return;
			break;
		}
	}
}

void remove_by_surname(vector<User>* users) {
	cout << "Enter user surname" << endl;
	string surname = get_surname();

	for (vector<User>::iterator it = users->begin(); it != users->end();) {
		User user = *it;

		if (surname.compare(user.Surname) == 0) {
			display_user(&user);
			it = users->erase(it);
		}else{
			++it;
		}
	}
}


void remove_by_id(vector<User>* users) {
	cout << "Enter user id" << endl;
	int id = get_id();

	for (vector<User>::iterator it = users->begin(); it != users->end();) {
		User user = *it;

		if (id == user.IdNumber) {
			display_user(&user);
			it = users->erase(it);
		}
		else {
			++it;
		}
	}
}
