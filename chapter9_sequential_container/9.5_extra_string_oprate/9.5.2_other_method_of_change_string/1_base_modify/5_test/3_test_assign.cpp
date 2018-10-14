#include <iostream>
#include <string>
#include <iterator>
#include <cassert>

/*
 * basic_string& assign( size_type count, CharT ch );
 *
 *  basic_string& assign( const basic_string& str, );
 *  basic_string& assign( const basic_string& str, size_type pos, size_type count );
 *  basic_string& assign( const basic_string& str, size_type pos, size_type  count = npos );
 *
 *
 *  basic_string& assign( const CharT* s, size_type couunt );
 *  basic_string& assign( const CharT* s );
 *
 *
 *
 *  template< class InputIt >
 *  basic_string& assign( InputIt first, InputIt last );
 *
 *  basic_string& assign( initializer_list<CharT> ilist );
 *
 *
 *  template<  class T >
 *  basic_string& assign( const T& t );
 *  template< class T >
 *  basic_string& assign( const T& t, size_type pos,  size_type count ); 
 *
 *
 */


using namespace std;

int main(void) {
	string s;


	s.assign(4,'=');
	cout << s <<  endl; //"===="


	string  const c("Exemplary");
	s.assign(c);
	cout << s << endl;  //"Exemplary


	s.assign(c,  0, c.length() - 1); 
	cout << s << endl; // "Exemplar"

	s.assign(string("C++ by ") + "example");
	cout << s << endl; //"C++ by example"


	s.assign("C-style string",  7);
	cout << s << endl; //  is "C-styl" not  " string",cause the first arg is be treat as a pointer to first char.
	assert("C-style" == s);


	s.assign("C-style\0 string"); 
	cout << s << endl; // "C-style"


	char mutable_c_str[] = "C-style string";
	s.assign(begin(mutable_c_str),end(mutable_c_str) - 1);   //cause end(mutable_c_string)  is a \0
	cout << s << endl; // "C-style string"



	s.assign({'l','o','v','e'});
	cout << s << endl;  // "love"

}
