#include <iostream>

int main(void){
	int a = 0;
	int b = {0};
	int c{0};
	int d(0);

		
	std::cout << a << b << c << d << std::endl;
		
	// list initialized has a important adantage: it will cause error while 
	// there exists risk that losing data.
	long double ld = 3.1415926;
	long double v1{ld},v2{ld};  
	long double v3(ld),v4 = ld; 

	std::cout << v1 << std::endl
		<< v2 << std::endl
		<< v3 << std::endl
		<< v4 << std::endl;
	return 0;


}
