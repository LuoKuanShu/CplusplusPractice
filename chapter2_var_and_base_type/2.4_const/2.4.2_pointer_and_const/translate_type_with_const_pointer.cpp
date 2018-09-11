#include <iostream>

using namespace std;

int main(void){
	int i = 2;
	const double *pcd = &i; //won't translate the int to double automately.it raise a error.

	cout << i << endl;
}
