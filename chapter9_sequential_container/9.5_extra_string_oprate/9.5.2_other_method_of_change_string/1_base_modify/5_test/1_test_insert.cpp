#include <iostream>
#include <string>
#include <cassert>

using namespace std;

/*
 *  basic_string& insert( size_type index, size_type count, CharT ch);
 *
 *  basic_string& insert( size_type index, const charT* s );
 *  basic_string& insert( size_type index, const charT* s, size_type count );
 *
 *  basic_string& insert( size_type index, const basic_string &str );
 *  basic_string& insert( size_type index, const basic_string &str, size_type index_str, size_type count );
 *  basic_string& insert( size_type index, const basic_string &str, size_type index_str, size_type = npos );
 *
 *  iterator insert( iterator pos, CharT ch );
 *  iterator insert( const_iterator pos, CharT ch );
 *
 *  void insert( iterator pos, size_type count, CharT ch );
 *
 *  template< class InputIt > 
 *  void insert( const_iterator pos, InputIt first, InputIt last );
 *  template< class InputIt >
 *  void insert( iterator pos, InputIt first, InputIt last );
 *
 *  template< class T >
 *  basic_string& insert( size_type pos, const T &t );
 *
 *  template< class T >
 *  basic_string& insert( size_type index, const T &t, size_type index_str, size_type count );
 *
 * iterator insert( const_iterator  pos, initializer_list il );
 *
 */


int main(void) {
	string s = "xmplr";

	auto res = s.insert(0, 1, 'E');  //Exmplr
	assert("Exmplr" == s);  //if "Exmplr" !=  s,then script will failed  to run.
	assert(res == s); 

	res = s.insert(2, "e");
	//if wanna insert a char,must use insert(size_type pos,size_type count, CharT ch );
	//rather than insert( size_type pos, CharT char );
	assert("Exemplr" == s);
	assert(res == s);

	//insert( size_type pos, const string& s);
	res = s.insert(6, "a"s);  //here "a"s mean it is a string object rather than a c-styled-string.
	assert("Exemplar" == s);
	assert(res == s);
	
	res = s.insert(8, " is an example string."s, 0, 14);
	assert("Exemplar is an example" == s);
	assert(res == s);


	//here the iterator version func can insert a char with just two arguements
	// insert( const_iterator pos, CharT ch );
	// also can insert multi chars with insert(  const_iterator pos, size_type count, CharT ch );
	// and 
	// const_iterator meant that can't modify the obj it binded,rather than const_iterator itself.
	auto res1 = s.insert(s.cbegin() + s.find_first_of('n') + 1, ':');
	assert("Exemplar is an: example" == s);
	assert(*res1 == ':');




	//insert( const_iterator pos, size_type couunt, CharT ch );
	res1 = s.insert(s.cbegin() + s.find_first_of(':') + 1, 2, '=');
	assert("Exemplar is an:== example" == s);
	assert(*res1 == '=');


	
	//template< class InputIt >
	//void insert( const_iterator pos, Inputit first, InputIt last );  return void 
	{
		string str = " string";
		s.insert(s.cbegin() + s.find_last_of('e') + 1, str.cbegin(), str.cend());
		assert("Exemplar is an:== example string" == s);
	      	
		
	}


	res1 = s.insert(s.cbegin() + s.find_last_of('g') +  1,  {'.'});
	assert("Exemplar is an:== example string." == s);
	assert(*res1 == '.');

}
