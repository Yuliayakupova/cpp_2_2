#include <iostream>
#include <vector>  

#include "User.h"
#include "io.h"

int main()
{

    vector<User> users;

    int n = get_n();
    for (int i = 0; i < n;i++) {
        User user = get_user();

        users.push_back(user);
    }

    //display_users(users);


    //....
}

