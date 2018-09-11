#include <iostream>
#include <vector>

using namespace std;

void without_init();
void without_condition();
void without_express();

vector<string> vs(5,"he");
		
int main(void){
	without_init();
	cout << "\n\n";
	without_condition();

	cout << "\n\n";
	without_express();
	return 0;
}

void without_express(){
	vector<string> vs;

	cout << "input: " << endl;
	for (string s;cin >> s;/* nothing */){
		vs.push_back(s);
	}

	//print
	for (auto str : vs){
		cout << str << endl;
	}
}

void without_condition(){
	vector<int> vi{1,4,3,-1};

	for (auto beg = vi.begin();/* nothing */;++beg){
		if (beg != vi.end() && *beg >= 0){
			cout << *beg << endl;
		}else{
			break;
		}
	}

}

void without_init(){
	auto beg_iter = vs.begin();
	for (/* nothing */;beg_iter != vs.end();++beg_iter){
		cout << *beg_iter << endl;
	}

}
