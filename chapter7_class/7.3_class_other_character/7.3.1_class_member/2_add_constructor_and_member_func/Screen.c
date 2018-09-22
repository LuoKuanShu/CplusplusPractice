#include <iostream>

class Screen {
public:
	typedef std::string::size_type pos;


public:
	Screen()=default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c) { }  //the cursor not init by list

public:
	char get() const { return contents[cursor]; }
	inline get(pos ht,pos wd) const;
	Screen &move(pos r,pos c);

private:
	pos cursor = 0;
	pos height = 0,width = 0;
	std::string contents;

};
