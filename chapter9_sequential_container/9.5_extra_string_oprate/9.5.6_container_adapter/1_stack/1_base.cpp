#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	stack<int> stk;
	stk.push(0);
	stk.push(1);
	stk.push(2);

	//
	auto res = stk.top();
	stk.pop();
	cout << res << " ";

	res = stk.top();
	stk.pop();
	cout << res << " ";

	res = stk.top();
	stk.pop();
	cout << res << " " << endl;

	cout << (stk.empty()? "the container is empty" : "not empty.") << endl;

}
