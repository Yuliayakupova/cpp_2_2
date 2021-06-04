#include <iostream>
#include "io.h"
#include "display.h"
#include "menu_search.h"

using namespace std;

void menu_search(vector <User>* users) {
	while (true) {

		string input;

		cout << "                    SEARCH MENU" << endl << endl
			<< "1. By Name" << endl
			<< "2. By ID Number" << endl
			<< "3. By Birthday" << endl
			<< "4. By Salary" << endl
			<< "5. By Country" << endl
			<< "6. By Work place" << endl
			<< "7. RETURN to MAIN MENU" << endl;


		cin >> input;

		if (is_integer(input) == false) {
			cout << "Need to enter an integer number! Please, try again: " << endl;
			continue;
		}

		int chooseOperation = stoi(input);

		switch (chooseOperation) {
			case 1:
				//cout << "Enter user name" << endl;
				//cin >> input;
				search_by_name(users);
			break;
			case 2:
				//cout << "Enter user id" << endl;
				//cin >> input;
				//search_by_id();

			break;
			case 3:
				//cout << "Enter user birthday" << endl;
				//cin >> input;
				//search_by_birthday();

				break;
			case 4:
				//cout << "Enter user salary" << endl;
				//cin >> input;
				//search_by_salary();

				break;
			case 5:
				//cout << "Enter user country" << endl;
				//cin >> input;
				//search_by_country();

				break;
			case 6:
				//cout << "Enter user workplace" << endl;
				//cin >> input;
				//search_by_workplace();

				break;
			case 7:
				return;
			break;
		}
	}
}

void search_by_name(vector<User>* users) {
	cout << "Enter user name" << endl;
	string name = get_name();
	for (int i = 0; i < users->size(); i++) {
		User user = users->at(i);
		if (name.compare(user.Name) == 0) {
			display_user(&user);
		}
	}
}

//void search_by_id(vector <User> * users) {}

