#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#define NONE "\033[m"
#define RED  "\033[0;32;31m"

using namespace std;

class Screen {
	friend ostream& print(ostream&,const Screen&);

public:
	typedef std::string::size_type pos;   //express the point.

public:
	Screen()=default;
	Screen(pos w,pos h):width(w),height(h),contents(w * h,'*') {}
	Screen(pos w,pos h,char c):width(w),height(h),contents(w * h,c) { }

//member func
public:
	char get() const { return contents[cursor]; }
	inline char get(pos h,pos w) const;
	inline void set(pos center) { cursor = center; }
	Screen &move(pos h,pos w);
private:
	pos cursor = 0;
	pos height = 31,width = 135;
	pos cnt = height * width;
	std::string contents = string(cnt,'*');   //copy
};

//definition
char Screen::get(pos h,pos w) const {
	pos raw = h * width;
	return contents[raw + w];
}

inline Screen &Screen::move(pos h,pos w){
	pos raw = h * width;
	cursor = raw + w;

	return *this;

}

//non-member function
ostream &print(ostream&,const Screen&);

ostream &print(ostream &my_cout,const Screen &item){
	system("clear");

	string s = item.contents;
	
	//print contents and print the char at cursor with color.
	for (Screen::pos i = 0;i != s.size();++i) {
		if (i == item.cursor) {
			char c = s[i];
			printf(RED"%c",c);
			printf(NONE);
			continue;
		}
		my_cout << s[i];
	}

	return my_cout;
}
