
#include <iostream>
#include <forward_list>

/*
 * con {"i","keep","run"};
 * insert_for(con,"i","always");
 * 
 * output of con:
 *    i always keep run
 *
 * insert_for(con,"f","on the row.");
 *
 * output of con:
 * 	i keep run on teh row.
 *
 */

using namespace std;

using iter = forward_list<string>::iterator;

forward_list<string>& insert_for(forward_list<string>&,string,string);
iter find(forward_list<string>&,string);
void print(const forward_list<string>&);

int main(void) {
	forward_list<string> datas{"love","you","forever"};
	auto &res = insert_for(datas,"forever",",I promise.");
	print(res);

	//insert not in end or begin
	auto & res2 = insert_for(datas,"you","baby");
	print(datas);



}

forward_list<string>& insert_for(forward_list<string> &container,string str_pre,string data) {

	//look up pre iterator
	auto pre = find(container,str_pre);	

	//if not have pre
	if (pre == container.end()) {
		container.insert_after(pre,data);
	}

	//if found pre
	if (pre != container.end()) {
		container.insert_after(pre,data);
	}

	return container;
	
}

iter find(forward_list<string> &container,string item) {

	auto ibeg = container.begin();

	while (ibeg != container.end()) {
		if (*ibeg == item) {
			return ibeg;	
		}
		++ibeg;
	}

	return container.end();

}

void print(const forward_list<string> &con) {
	for (auto i : con) {
		cout << i << " ";
	}
	cout << endl;

}
