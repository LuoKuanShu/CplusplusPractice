#include <iostream>
#include <vector>
#include <stdlib.h>

#define NONE "\033[m"
#define RED "\033[0;32;31m"

class Screen {
public:
	typedef std::string::size_type pos;
	//int test;   //test how compiler deal with commen type and alian,is there any diffences in init?

//construtor
public:
	Screen()=default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c) { }  //the cursor not init by list

//member function 
public:
	char get() const { return contents[cursor]; }
	inline char get(pos ht,pos wd) const;
	Screen &move(pos r,pos c);
	void some_member() const;   //will record the count of this member be called.
	
	Screen &set(char c) { contents[cursor] = c; return *this; }
	Screen &set(pos r,pos h,char c) { move(r,h);set(c); return *this;}
	
	//display contents
	Screen &display(ostream &os) { do_display(os); return *this; }
	const Screen &display(ostream &os) const {do_display(os); return *this; }

	//used to check out some infomation
	pos getCursor() const { return cursor; }   //if class's member data of builtin-type don't inited by in-class-init-value,then it's value is random,just like a local variable in function.
	/*
	auto getAccessCtr() const { return access_ctr; }
	vector<pos> getSize() const {
		vector<pos> ret;
		ret.push_back(width);
		ret.push_back(height);

		return ret;
	}  
       */	

//member function
private:

	//do actual display work.
	void do_display(std::ostream &os) const { 
		system("clear");
		
		for (pos i = 0;i != contents.size();++i) {
			if (cursor == i) {
				//print color char
				do_display_char('&');
				continue;			
			}
		}

		os << contents[i];
	}
	
	//display a color char at cursor.
	void do_display_char(char c) const  {
		printf(RED"%c",c);
		printf(NONE);
	}

//member data
private:
	pos cursor = 0;
	pos height = 31,width = 135;
	std::string contents = string(height * width,'*');
	mutable size_t access_ctr = 0;  //record count

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
