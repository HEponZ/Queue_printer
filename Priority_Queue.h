#pragma once
#include "User.h"

class Priority_Queue
{
private:
	vector<User> users;
	int size = users.size();
	vector<int> prioritets;
public:
	void set(const User& user);
	void print_last();
	User Extract();
};