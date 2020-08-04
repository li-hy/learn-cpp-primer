#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include "ex07.h"
#include "Screen.h"

class Window_mgr {
public:
	using Screen_index = vector<Screen>::size_type;
	void clear(Screen_index &);
	Screen_index add_screen(const Screen &);
private:
	vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(Screen_index &i)
{
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

Window_mgr::Screen_index
Window_mgr::add_screen(const Screen &s)
{
	screens.push_back(s);
	return screens.size() - 1;
}

#endif
