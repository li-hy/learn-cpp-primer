#ifndef SCREEN_H
#define SCREEN_H

#include "ex07.h"


class Screen {
	friend class Window_mgr;
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos h, pos w, char c): height(h), width(w),
		contents(h * w, c) { }
	char get() const  // read the char under the cursor
		{ return contents[cursor]; }
	inline char get(pos row, pos col) const; // explicitly declared as an inline function
	Screen &move(pos row, pos col);	// will be set to an inline function after
	void call_times() const;
	Screen &set(char c);
	Screen &set(pos row, pos col, char c);
	Screen &display(std::ostream &);
	const Screen &display(std::ostream &) const;

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	mutable size_t access_ctr = 0;
	void do_display(std::ostream &os) const
		{ os << contents; }
};

char Screen::get(pos row, pos col) const // an inline function
{
	pos local = row * width + col;
	return contents[local];
}

inline Screen &Screen::move(pos row, pos col)
{
	pos local = row * width + col;
	cursor = local;
	return *this;
}

inline void Screen::call_times() const
{
	++access_ctr;
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

#endif
