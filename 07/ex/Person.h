#ifndef PERSON_H
#define PERSON_H

#include "ex07.h"

class Person {
private:
	string name;
	string address;

public:
	Person() = default;
	Person(const string &who, const string &where):
		name(who), address(where) { }
	explicit Person(std::istream &);

	const string &get_name() const { return name; }
	const string &get_addr() const{ return address; }
	std::istream &read(std::istream &, Person &);
	std::ostream &print(std::ostream &, const Person &);
};

#endif
