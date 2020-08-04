#include "ex07.h"

class Book {
public:
	Book(const string &isbn, const string &name,
		const string &author, const string &pubdate):
		isbn_(isbn), name_(name), author_(author),
		pubdate_(pubdate) { };
	Book(): Book("", "", "", "") { }
	Book(std::istream &is)
	{
		is >> isbn_ >> name_ >> author_ >> pubdate_;
	}

private:
	string isbn_;
	string name_;
	string author_;
	string pubdate_;
}
