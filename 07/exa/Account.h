#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "ex07.h"

class Account {
public:
	void calculate() { amount += amount * interest_rate; }
	static double rate() { return interest_rate; }
	static void rate(double);
private:
	string owner;
	double amount;
	static double interest_rate;
	static double init_rate();
};

#endif
