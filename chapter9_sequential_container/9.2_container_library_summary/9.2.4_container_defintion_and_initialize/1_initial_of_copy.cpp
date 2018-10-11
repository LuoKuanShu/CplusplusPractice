#i
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>

using namespace std;

int main(void) {
	list<string> authors {"mm","manson","marilyn"};
	vector<const char*> articles{"love","not","ended"};

	list<string> list2(authors); //right,type corresponding.
	deque<string> authList(authors); //error,not suit container type.
	vector<string> words(authors); //error,not suit element type.

	forward_list<string> words(authors.begin(),authors.end() - 1);

}
