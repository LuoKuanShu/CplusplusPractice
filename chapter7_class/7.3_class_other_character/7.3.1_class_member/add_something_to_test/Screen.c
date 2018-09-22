#include <iostream>
#include <vector>

class Screen {
public:
	typedef std::string::size_type pos;
	int test;   //test how compiler deal with commen type and alian,is there any diffences in init?

public:
	Screen()=default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c) { }  //the cursor not init by list

public:
	char get() const { return contents[cursor]; }
	inline char get(pos ht,pos wd) const;
	Screen &move(pos r,pos c);
	void some_member() const;   //will record the count of this member be called.
	
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

private:
	pos cursor;
	pos height = 0,width = 0;
	std::string contents;
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
