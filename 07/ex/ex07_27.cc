#include "ex07.h"
#include "Screen.h"

int main()
{
	Screen my_screen(5, 5, 'X');
	my_screen.move(4, 0).set('#').display(cout);
	cout << "\n";
	my_screen.display(cout);
	cout << "\n" << endl;

	return 0;
}
