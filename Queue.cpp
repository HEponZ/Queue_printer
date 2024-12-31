#include "Queue.h"

void Queue::set(const User& user_buf)
{
	users.push_back(user_buf);
}

void Queue::print()
{
	for (size_t i{ 0 }; i < users.size(); i++)
	{
		users[i].print();
	}
}