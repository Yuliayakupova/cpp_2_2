#include "User.h"

 
#include <fstream>

void save_to_file(vector <User>* users) {
	ofstream fs("users.bin", ios::out | ios::binary | ios::app);
	//| ios::trunc
	for (int i = 0; i < users->size(); i++) {
		User user = users->at(i);
		fs.write((char*) &user, sizeof User);
	}

	fs.close();

}