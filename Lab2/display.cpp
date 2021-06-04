#include <iostream>
#include <string>

#include "display.h"

using namespace std;

void display_users(vector <User> *users)
{
	
	cout << "Name\t" << "Surname\t" << "Id Number\t" << "Birthday\t" << "Date\t" << "Salary\t" << "Hometown\t" << "Country\t" << "Workplace\t" << endl;
	cout << "=====================================================================================================" << endl;

	for(int i = 0; i < users->size(); i++){
		//проверяет диапазон начиная с i и до конца users
		display_user(&users->at(i));
	}
}

void display_user(User* user) {
	cout << user->Name << '\t' << user->Surname
		<< '\t' << user->IdNumber << '\t' << user->Birthday << '\t'
		<< user->Date << '\t' << user->Salary << '\t' << user->Hometown
		<< '\t' << user->Country << '\t' << user->Workplace << endl;
}

