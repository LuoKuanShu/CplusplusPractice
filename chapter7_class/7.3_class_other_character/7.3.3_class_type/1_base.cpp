#include <iostream>

using namespace std;

//although both all member in First and Second are same,but First are not same as Second
//
struct First {
	int memi;
	int getMem();
};

struct Second {
	int memi;
	int getMem();
};

int main(void) {
	First f;
	Second s = f;
}
