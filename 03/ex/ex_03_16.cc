#include "ex_03.h"

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };

	cout << "v1\n\tsize: " << v1.size() << "\n\tvalue:[";
	for (auto i : v1)
		cout << i << ", ";
	if (!v1.empty())
		cout << '\b' << '\b';
	cout << "]\n" << endl;

	cout << "v2\n\tsize: " << v2.size() << "\n\tvalue:[";
	for (auto i : v2)
		cout << i << ", ";
	if (!v2.empty())
		cout << '\b' << '\b';
	cout << "]\n" << endl;

	cout << "v3\n\tsize: " << v3.size() << "\n\tvalue:[";
	for (auto i : v3)
		cout << i << ", ";
	if (!v3.empty())
		cout << '\b' << '\b';
	cout << "]\n" << endl;

	cout << "v4\n\tsize: " << v4.size() << "\n\tvalue:[";
	for (auto i : v4)
		cout << i << ", ";
	if (!v4.empty())
		cout << '\b' << '\b';
	cout << "]\n" << endl;

	cout << "v5\n\tsize: " << v5.size() << "\n\tvalue:[";
	for (auto i : v5)
		cout << i << ", ";
	if (!v5.empty())
		cout << '\b' << '\b';
	cout << "]\n" << endl;

	cout << "v6\n\tsize: " << v6.size() << "\n\tvalue:[\n";
	for (auto i : v6) {
		if (i.empty())
			cout << "\t\t(null)\n";
		else
			cout << "\t\t" << i << '\n';
	}
	cout << "]\n" << endl;

	cout << "v7\n\tsize: " << v7.size() << "\n\tvalue:[\n";
	for (auto i : v7) {
		if (i.empty())
			cout << "\t\t(null)\n";
		else
			cout << "\t\t" << i << '\n';
	}
	cout << "]\n" << endl;
}
