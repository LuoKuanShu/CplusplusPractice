#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>

/*
 *  basic_string& erase( size_type index = 0, size_type  count );
 *
 *  iterator  erase(iterator postion ); 
 *  iterator erase( const_iterator  position );
 *
 *  iterator erase( iterator first, iterator last );
 *  iterator erase( const_iterator first, const_iterator last ); 
 *
 *
 */


using namespace std;

int main(void) {
	string s = "This is an example";
	cout << s << endl;

	s.erase(0, 5); //remove "This "
	cout << s << endl;  // "is an example"

	s.erase(find(s.begin(), s.end(), ' ')); //remove ' '
	cout << s << endl; //"isan example"


	//this is amazing.
	//erase(iterator)  will remove a char
	//erase(class::iterator) will remove chars from current to the end of string.
	s.erase(s.find(' '));  //remove chars from ' ' to the end of string 
	cout << s << endl;  // "isan"
}
