#include "Person.h"
#include "ex07.h"

Person::Person(std::istream &is)
{
	read(is, *this);
}

std::istream &Person::read(std::istream &is, Person &person)
{
	return is >> person.name >> person.address;
}

std::ostream &Person::print(std::ostream &os, const Person &person)
{
	return os << person.name << " " << person.address;
}
