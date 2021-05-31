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

bool is_Valid_Date(string buffer) {
	int day, month, year;
	string str1;
	getline(cin, str1);
	string str2;
	string str3;
	day = str1.find('.', 0);
	str2 = str1.substr(0, day);
	month = stoi(str2);
	str1.erase(0, day + 1);
	day = str1.find('.', 0);
	str3 = str1.substr(0, day);
	month = stoi(str3);
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		if (day <= 31) {
			cout << "true";
		}
		else {
			cout << "false";
		}
	}
	else {
		if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {
			if (day <= 30) {
				cout << "true";
			}
			else {
				cout << "false";
			}
		}
		else {
			cout << "false";
		}
	}
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

int get_Birthday() {

	while (true) {
		string buffer;
		cout << "Please, enter your date of birthday: " << endl;

		cin >> buffer;
		if (is_Valid_Date(buffer) == false) {
			cout << "Incorrect date! Please, try again: " << endl;
			continue;
		}

		if (buffer.length() > 11 || buffer.length() < 11)
		{
			cout << "Incorrect date length! Please, try again: " << endl;
			continue;
		}

		for (int i = 0; i < buffer.length(); i++)
		{
			if (std::isdigit(buffer[i]) || std::ispunct(buffer[i]))
			{
				continue;
			}
			cout << "Need to enter date like \"31.12.2020\"! Please, try again: " << endl;
			
		}

		

		int n = stoi(buffer);

		return n;

	}
}

User get_user() {

	User user;

	user.Name = get_name();
	user.Surname = get_surname();
	user.IdNumber = get_id();
	user.Birthday = get_Birthday();


	return user;

}