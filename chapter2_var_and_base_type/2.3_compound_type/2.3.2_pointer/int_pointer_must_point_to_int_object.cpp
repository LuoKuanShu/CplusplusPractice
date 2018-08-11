#include <iostream>

int main(void){

	double d;
	double *dp1 = &d;
	double *dp2 = dp1;
	
	int *ip = dp1;   //type not suitable;
	ip = &d;         //type not suitable.

	return 0;

}
