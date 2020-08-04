#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	int vb = v1;
	while (vb <= v2) {
		std::cout << vb << " ";
		vb++;
	}
	std::cout << std::endl;
	return 0;
}
