#ifndef SCREEN_H
#define SCREEN_H

#include "ex07.h"

class Screen;

class Windows_mgr {
public:
	using Screen_index = vector<Screen>::size_type;
	void clear(Screen_index &);
private:
	vector<Screen> screens;
};

class Screen {
	friend void Windows_mgr::clear(Screen_index &);
public:
	typedef string::size_type pos;

	Screen() = default;
	Screen(pos h, pos w): hight(h), width(w),
		contents(h*w, ' ') { }
	Screen(pos h, pos w, char c): hight(h), width(w),
		contents(h*w, c) { }

	char get() const
		{ return contents[cursor]; }
	char get(pos row, pos col) const
		{ return contents[row * width + col]; }

	Screen &move(pos row, pos col);
	Screen &set(char);
	Screen &set(pos, pos, char);
	Screen &display(std::ostream &);
	const Screen &display(std::ostream &) const;
	pos size() const;

private:
	pos cursor = 0;
	pos hight = 0, width = 0;
	string contents;
	void do_display(std::ostream &os) const
		{ os << contents; }
};

void Windows_mgr::clear(Screen_index &i)
{
	if (i > screens.size()) // judge for out_of_range
		return;
	Screen &s = screens[i];
	s.contents = string(s.hight * s.width, ' ');
}

inline Screen &Screen::move(pos row, pos col)
{
	cursor = row * width + col;
	return *this;
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos row, pos col, char c)
{
	contents[row * width + col] = c;
	return *this;
}

inline Screen &Screen::display(std::ostream &os)
{
	do_display(os);
	return *this;
}

inline const Screen &Screen::display(std::ostream &os) const
{
	do_display(os);
	return *this;
}

inline Screen::pos Screen::size() const
{
	return hight * width;
}

#endif
