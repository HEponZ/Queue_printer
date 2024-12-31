#include "Printer.h"

void Printer::statistic()
{
	cout << "______Статистика______\n";
	queue.print();
}

void Printer::Add(string FIO_S, string prof_S, int prioritets, string date_S)
{
	User user_buf(FIO_S, prof_S, prioritets, date_S);
	queue.set(user_buf);
	queue_pri.set(user_buf);
}

void Printer::print_pri()
{
	queue_pri.print_last();
}