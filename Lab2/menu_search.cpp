#include <iostream>
#include "io.h"
#include "display.h"
#include "menu_search.h"

using namespace std;

void menu_search(vector <User>* users) {
	while (true) {

		string input;

		cout << "                    SEARCH MENU" << endl << endl
			<< "1. By User Name" << endl
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
				search_by_name(users);
			break;
			case 2:
				search_by_id(users);
			break;
			case 3:
				search_by_birthday(users);
				break;
			case 4:
				search_by_salary(users);
				break;
			case 5:
				search_by_country(users);
				break;
			case 6:
				search_by_workplace(users);
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

void search_by_id(vector<User> * users) {
	cout << "Enter user id" << endl;
	int id = get_id();
	for (int i = 0; i < users->size(); i++) {
		User user = users->at(i);
		if (id == user.IdNumber) {
			display_user(&user);
		}
	}
}

void search_by_birthday(vector<User>* users) {
	cout << "Enter user birthday" << endl;
	string birthday = get_birthday();
	for (int i = 0; i < users->size(); i++) {
		User user = users->at(i);
		if (birthday.compare(user.Birthday) == 0) {
			display_user(&user);
		}
	}
}

void search_by_salary(vector<User>* users) {
	cout << "Enter user salary" << endl;
	double salary = get_salary();
	for (int i = 0; i < users->size(); i++) {
		User user = users->at(i);
		if (salary == user.Salary) {
			display_user(&user);
		}
	}
}

void search_by_country(vector<User>* users) {
	cout << "Enter user country" << endl;
	string country = get_country();
	for (int i = 0; i < users->size(); i++) {
		User user = users->at(i);
		if (country.compare(user.Country) == 0) {
			display_user(&user);
		}
	}
}

void search_by_workplace(vector<User>* users) {
	cout << "Enter user workplace" << endl;
	string workplace = get_country();
	for (int i = 0; i < users->size(); i++) {
		User user = users->at(i);
		if (workplace.compare(user.Workplace) == 0) {
			display_user(&user);
		}
	}
}
