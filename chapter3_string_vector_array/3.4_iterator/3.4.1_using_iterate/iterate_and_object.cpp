#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
	vector<string> vs {"i love you"," i want to kill somebody"};

	auto iterate = vs.cbegin();
	cout << (*iterate).size();

	cout << iterate -> size() << endl;

}
