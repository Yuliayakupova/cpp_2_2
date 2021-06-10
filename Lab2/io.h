#ifndef IO_H
#define IO_H

#include <iostream>
#include <string>
#include <cmath>
#include "User.h"

bool is_integer(string buffer);

int get_n();
string get_name();
string get_surname();
int get_id();
string get_birthday();
double get_salary();
string get_country();
string get_workplace();
User get_user();

#endif