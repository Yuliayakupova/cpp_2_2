#ifndef USER_H
#define USER_H

#include <string>
#include <vector> 

using namespace std;

struct User {
	string Name;
	string Surname;
	int IdNumber;
	string Birthday;
	string Date;
	double Salary;
	string Hometown;
	string Country;
	string Workplace;
};

void save_to_file(vector <User>* users);

#endif