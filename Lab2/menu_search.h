#ifndef MENU_SEARCH_H
#define MENU_SEARCH_H

#include "User.h"
#include <vector>
using namespace std;

void menu_search(vector <User>* users);
void search_by_name(vector<User>* users);
void search_by_id(vector<User>* users);
void search_by_birthday(vector<User>* users);
void search_by_salary(vector<User>* users);
void search_by_country(vector<User>* users);
void search_by_workplace(vector<User>* users);

#endif
