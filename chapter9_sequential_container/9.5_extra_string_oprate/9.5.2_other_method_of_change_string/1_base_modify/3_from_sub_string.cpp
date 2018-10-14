#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string source,datas = "love you";

	source.assign(datas,0,datas.size());
	cout << source << endl; // love you

	source.insert(source.size()," ");
	source.insert(source.size(),datas);
	cout << source << endl; //love you love you

	source.insert(source.size(),datas,0,4);
	cout << source << endl; //love you love youlove

}
