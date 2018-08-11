#include <iostream>

int main(void){
	int ival = 1024;
	int &refVal = ival;

	std::cout << refVal << std::endl;

	int ival2 = 2048;
	refVal = ival2; //not raise any error.
	std::cout << refVal << std::endl;

	--refVal;
	std::cout << ival2 << std::endl;
	std::cout << ival << std::endl;	 //but refVal always bounds to ival,never changed.


	refVal = 12;
	std::cout << ival << std::endl;

	int ival3 = refVal;
	std::cout << ival3 << std::endl;

	int &refVal3 = refVal;
	std::cout << refVal3 << std::endl;

	int &ref = refVal,&ref2 = ival2;
	std::cout << ref << " " << ref2 <<std::endl;

	return 0;

}
