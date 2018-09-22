#include <iostream>

class Screen {
public:
	typedef std::string::size_type pos;


public:
	Screen()=default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c) { }  //the cursor not init by list

public:
	char get() const { return contents[cursor]; }
	inline char get(pos ht,pos wd) const;
	Screen &move(pos r,pos c);
	void some_member() const;   //will record the count of this member be called.

private:
	pos cursor = 0;
	pos height = 0,width = 0;
	std::string contents;
	mutable size_t access_ctr;  //record count

};


//member func definition
inline Screen &Screen::move(pos r,pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r,pos c) const {
	pos row = width * r;
	return contents[row + c];
}

void Screen::some_member() const {
	++access_ctr;
}
