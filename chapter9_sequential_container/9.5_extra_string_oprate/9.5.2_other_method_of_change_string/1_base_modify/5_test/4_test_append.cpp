#include <iostream>
#include <string>


/*
 *  basic_string& append( size_type count, CharT ch);
 *
 *
 *  basic_string& append( const  basic_string& str );
 *  basic_string& append( const basic_string& str, size_type pos, size_type count );
 *  basic_string& append( const basic_string& str, size_type  pos, size_type = npos );
 *
 *
 *  basic_string& append( const CharT* s);
 *  basic_string& append( const CharT* s, size_type count );
 *
 *
 * template< class InputIt >
 *  basic_string& append( InputIt first, InputIt last );
 *
 *
 *  basic_string& append( initializer_list<CharT> ilist );
 *
 *
 * template< class T >
 *  basic_string& append( const T& t );
 *  template< class T >
 *  basic_string& append( const T& t, size_type pos, size_type  count = npos ) 
 *
 *
 *
 *
 */


using namespace std;

int main(void) {
	basic_string<char> str = "string";
	const char* cptr = "C-string";
	const char carr[] = "two and one";

	string output;

	output.append(3, '*');
	cout  << output << endl; // "***"


	output.clear();
	output.append(str);  //"string"
	cout << output << endl;

	
	output.clear();
	output.append(str, 3, 3);
	cout << output << endl; // "ing"


	output.clear();
	output.append(carr, 4);
	cout << output << endl;  // "two "

	output.clear();
	output.append(cptr);
	cout << output << endl; //"C-style"


	//this is amazing
	//output.clear();
	output.append(&carr[3], end(carr));
	cout  << output << endl; // " and one"

	output.clear();
	output.append({'l','o','v','e'});
	cout << output << endl; //"love"
	

}
