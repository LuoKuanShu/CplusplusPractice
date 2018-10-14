#include <iostream>
#include <string>

/*
 *  basic_string& replace(size_type pos, size_type count, const basic_string& str );
 *  basic_string& replace(const_iterator first, const_iterator last, const basic_string& str );
 *  basic_string&  replace( size_type pos, size_type count, const basic_string& str, size_type str_pos, size_type  str_count ); 
 *  basic_string& replace( size_type pos, size_type count, const basic_string& str, size_type str_pos, size_type str_count  = npos );
 *
 *
 *
 *  template< class InputIt >
 *  basic_string& replace( const_iterator first, const_iterator last, InputIt first2, InputIt last2 );
 *
 *
 *
 *  basic_string& replace( size_type pos, size_type count, const CharT* cstr, size_type count2 );
 *  basic_string& replace( size_type pos, size_type count, const CharT* cstr );
 *  basic_string& replace( const_iterator first,const_iterator last, const CharT* cstr, size_type count );
 *  basic_string& replace(const_iterator first, const_iterator last, const CharT* cstr );
 *
 *
 *
 *  basic_string& replace(size_type pos, size_type count, size_type c_count, CharT  ch );
 *  basic_string& replace(const_iterator first, const_iterator last, size_type count, CharT ch );
 *
 *
 * basic_string& replace(const_iterator first, const_iterator last, initializer_list<CharT> ilist );
 *
 *
 * template< class T >
 * basic_string& replace( size_type pos, size_type count, const T& t );
 * template< class T > 
 * basic_string& replace( const_iterator first, const_iterator last, const T& t );
 *  template< class T >
 *  basic_string& replace( size_type pos, size_type  count, const T& t, size_type pos2, size_type count2 );
 */

using namespace std;

int main(void) {
	string str("The quick brown for jumps over the lazy dog.");
	str.replace(str.find("brown"), 5, "red");
	cout << str << endl; // "The quick red for jumps  over  the lazy dog."


	str.replace(str.begin(), str.begin() + 3, 1, 'A');
	cout << str << endl; // "A quick red for jumps over the lazy dog."

}
