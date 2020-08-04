#include "ex_06.h"

int max(const int i, const int *ip)
{
	if (i > *ip)
		return i;
	else
		return *ip;
}
