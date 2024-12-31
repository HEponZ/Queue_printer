#pragma once
#include "Queue.h"
#include "Priority_Queue.h"

class Printer
{
private:
	Priority_Queue queue_pri;
	Queue queue;
public:

	void statistic();

	void Add(string FIO_S, string prof_S, int prioritets, string date_S);

	void print_pri();
};