#include <iostream>
#include <string>
#include <algorithm>

/*
 *  string s = "love your love.";
 *  s = replaceAll(s,"love","LOVE");
 *
 *  output: 
 *      "LOVE your LOVE."
 */


using namespace std;

string& replaceAll( string &s, string &oldVal, string &newVal );
string::const_iterator find_str( const string &str, const string &item );

int main(void) {
	string s = "1love your love.";
	string oldVal = "love", newOld = "hate";
	auto res = find_str(s,oldVal);
	cout << *res << endl;

}

string& replaceAll( string &s, string &oldVal, string &newVal ) {
	auto pos_first_iter = find(s.cbegin(), s.cend(), 'l');
	
	//auto iend = pos_first_iter + oldVal.size();	
	/*
	auto new_pos = s.erase(pos_first_iter, iend);
	auto next_pos = s.insert(new_pos, newVal) + newVal.size(); 
	*/
	return s;
}

string::const_iterator find_str( const string &str, const string &item ) {
	auto curr = find(str.cbegin(), str.cend(), item[0]), pre = curr;  //init curr and pre
	--curr,--pre;
	
	//curr != str.cend()
	while ((curr = find(++pre, str.cend(), item[0])) != str.cend()) {
		pre = curr;

		cout << *pre << endl;
		if (curr == str.cend())
			return curr;
		
		//got the first char of item
		//so check out other each char 
		size_t index;
		for (index = 1; index != str.size(); ++index)  {
			//curr represent the first char at first of loop
			curr = find(++curr, str.cend(), item[index]);
			cout << "index: " << index << endl;
			cout << "item[index] " << item[index] << endl;
			if (curr == str.cend())
				return curr;

			if (pre + 1 != curr)
				cout << "pre + 1 != curr" << endl;
				break;
			cout << *curr << endl;

			++pre; //pre == curr currently
		}
		//yes,get a substring matching item
		if (index == str.size())
			//it a iterator represent the first char that got it.
			return curr - (item.size() - 1);

	}
	return str.cend();

}
