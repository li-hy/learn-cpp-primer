#include "ex_03.h"

void checkAndPrint(const vector<int> &vec)
{
	if (vec.empty()) {
		cout << "Empty!" << endl;
		return;
	} else {
		cout << "size: " << vec.size();
		cout << "\ncontent: [ ";
		for (auto i = vec.cbegin(); i != vec.cend(); ++i)
			cout << *i << ((i == vec.cend() - 1) ? " " : ", ");
		cout << "]\n" << endl;
	}
}
void checkAndPrint(const vector<string> &vec)
{
	if (vec.empty()) {
		cout << "Empty!" << endl;
		return;
	} else {
		cout << "size: " << vec.size();
		cout << "\ncontent: [\n";
		for (auto s = vec.cbegin(); s != vec.cend(); ++s) {
			if (s->empty())
				cout << "\t(null)\n";
			else
				cout << '\t' << *s << "\n";
		}
		cout << "]\n" << endl;
	}
}
int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };

	checkAndPrint(v1);
	checkAndPrint(v2);
	checkAndPrint(v3);
	checkAndPrint(v4);
	checkAndPrint(v5);
	checkAndPrint(v6);
	checkAndPrint(v7);

	return 0;
}
