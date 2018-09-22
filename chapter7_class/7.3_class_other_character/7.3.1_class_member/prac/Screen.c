#include <iostream>

using namespace std;

class Screen {
	friend ostream& print(ostream&,const Screen&);

public:
	typedef std::string::size_type pos;   //express the point.

public:
	Screen()=default;
	Screen(pos w,pos h):width(w),height(h),contents(w * h,' ') {}
	Screen(pos w,pos h,char c):width(w),height(h),contents(w * h,c) { }

//member func
public:
	char get() const { return contents[cursor]; }
	inline char get(pos h,pos w) const;
	Screen &move(pos h,pos w);
private:
	pos cursor = 0;
	pos height = 0,width = 0;
	std::string contents;
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
	my_cout << "width: " << item.width << " " << "height: " << item.height << " " 
		<< "cursor: " << item.cursor;
	return my_cout;
}
