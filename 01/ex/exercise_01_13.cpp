#include <iostream>

int main()
{
	int sum = 0;
	for (int val = 50; val <= 100; ++val)
		sum += val;
	std::cout << "Sum of 50 to 100 inclusive is "
		  << sum << std::endl;
	for (int val = 10; val >= 0; --val)
		std::cout << val << " ";
	std::cout << std::endl;
	std::cout << "Enter two ingeters:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	for (int vb = v1; vb <= v2; ++vb)
		std::cout << vb << " ";
	std::cout << std::endl;
	return 0;
}
