#include <iostream>
#include <stack>
#include <string>

void cal(std::string &s)
{
	std::stack<char> stk;
	bool in = false;
	for (const auto &c : s) {
		if (c == '(') {
			in = true;
			continue;
		}
		if (c == ')')
			in = false;
		if (in)
			stk.push(c);
	}
	std::string restr;
	while (!stk.empty()) {
		restr += stk.top();
		stk.pop();
	}
	s.replace(s.find('(')+1, restr.size(), restr);
}

int main()
{
	std::string s("This is (hello)");
	cal(s);
	std::cout << s << std::endl;
	return 0;
}
