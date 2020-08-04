#include "Account.h"
#include "ex07.h"

double Account::interest_rate = init_rate();

void Account::rate(double new_rate)
{
	interest_rate = new_rate;
}

double Account::init_rate()
{
	return 1.0;
}
