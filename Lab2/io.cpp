#include <iostream>
#include <string>
#include <cmath>

#include "io.h"


using namespace std;

bool is_integer(string buffer) {

	for (char const& c : buffer) {
		if (std::isdigit(c) == 0) return false;
	}

	return true;
}

bool is_valid_date(string buffer) {
	
	int day, month, year;
	//sscanf(buffer.c_str(), "%d-%d-%d", &day, &month, &year);
	return true;
	int max_day;
	switch (month)
	{
	case 1:  max_day = 31; break;
	case 2:  year % 4 != 0 ? max_day = 28 : max_day = 29; break;
	case 3:  max_day = 31; break;
	case 4:  max_day = 30; break;
	case 5:  max_day = 31; break;
	case 6:  max_day = 30; break;
	case 7:  max_day = 31; break;
	case 8:  max_day = 31; break;
	case 9:  max_day = 30; break;
	case 10: max_day = 31; break;
	case 11: max_day = 30; break;
	case 12: max_day = 31; break;
	return false;
	}
	return true;
}

	

int get_n() {

	while (true) {
		string buffer;
		cout << "Please, enter count of users: " << endl;

		cin >> buffer;

		if (is_integer(buffer) == false) {
			cout << "Need to enter an integer number! Please, try again: " << endl;
			continue;
		}

		int n = stoi(buffer);

		if (n < 1 || n > 10) {
			cout << "Need to enter an integer number from 1 to 10! Please, try again: " << endl;
			continue;
		}	
		return n;
	}
}

string get_name() {
	while (true) {
		string buffer;
		cout << "Please, enter user name: " << endl;

		cin >> buffer;

		if (buffer.length() > 50)
		{
			cout << "You entered a name that is too long! Please, try again: " << endl;
			continue;
		}

		for (int i = 0; i < buffer.length(); i++) {
			if (std::isalpha(buffer[i]) || std::isspace(buffer[i])) {
				continue;
			}
			cout << "You need to enter a username. For example, \"Ivan\". Please, try again: " << endl;
			cin >> buffer;
		}
		return buffer;
	}
}

string get_surname() {
	while (true) {
		string buffer;
		cout << "Please, enter user surname: " << endl;

		cin >> buffer;

		if (buffer.length() > 50)
		{
			cout << "You entered a surname that is too long! Please, try again: " << endl;
			continue;
		}

		for (int i = 0; i < buffer.length(); i++) {
			if (std::isalpha(buffer[i]) || std::isspace(buffer[i])) {
				continue;
			}
			cout << "You need to enter a user surname. For example, \"Ivanov\". Please, try again: " << endl;
			cin >> buffer;
		}

		return buffer;
	}
}

int get_id() {
	while (true) {
		string buffer;
		cout << "Please, enter ID-number: " << endl;

		cin >> buffer;

		if (is_integer(buffer) == false) {
			cout << "Need to enter an integer number! Please, try again: " << endl;
			continue;	
		}
		int id = stoi(buffer);

		return id;
	}
}

string get_birthday() {

	while (true) {
		string buffer;
		cout << "Please, enter date of birthday: " << endl;

		cin >> buffer;
		
		if (is_valid_date(buffer) == false) {
			cout << "Incorrect date! The date should be in the form of \"31.02.2020\".Please, try again: " << endl;
			continue;
		}

		return buffer;
	}
}

string get_date() {

	while (true) {
		string buffer;
		cout << "Please, enter date: " << endl;

		cin >> buffer;

		if (is_valid_date(buffer) == false) {
			cout << "Incorrect date! The date should be in the form of \"31.02.2020\".Please, try again: " << endl;
			continue;
		}

		return buffer;
	}
}

double get_salary() {
	while (true) {
		string buffer;
		cout << "Please, enter Salary: " << endl;

		cin >> buffer;

		if (is_integer(buffer) == false) {
			cout << "Incorrect input! The salary should be in the form of \"222.22\". Please, try again: " << endl;
			continue;
		}
		double salary = stoi(buffer);

		return salary;
	}
}

string get_hometown() {
	while (true) {
		string buffer;
		cout << "Please, enter hometown: " << endl;

		cin >> buffer;

		for (int i = 0; i < buffer.length(); i++) {
			if (std::isalpha(buffer[i])) {
				continue;
			}
			cout << "You need to enter hometown. For example, \"Moscow\". Please, try again: " << endl;
			cin >> buffer;
		}

		return buffer;
	}
}

string get_country() {
	while (true) {
		string buffer;
		cout << "Please, enter country: " << endl;

		cin >> buffer;

		for (int i = 0; i < buffer.length(); i++) {
			if (std::isalpha(buffer[i])) {
				continue;
			}
			cout << "You need to enter country. For example, \"Russia\". Please, try again: " << endl;
			cin >> buffer;
		}

		return buffer;
	}
}

string get_workplace() {
		string buffer;
		cout << "Please, enter workplase: " << endl;
		cin >> buffer;
		return buffer;
}

User get_user() {

	User user;

	user.Name = get_name();
	user.Surname = get_surname();
	user.IdNumber = get_id();
	user.Birthday = get_birthday();
	user.Date = get_date();
	user.Salary = get_salary();
	user.Hometown = get_hometown();
	user.Country = get_country();
	user.Workplace = get_workplace();

	return user;

}