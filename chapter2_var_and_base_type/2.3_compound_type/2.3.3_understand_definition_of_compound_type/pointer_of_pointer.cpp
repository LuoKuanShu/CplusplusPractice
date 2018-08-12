#include <iostream>

int main(void){
	int i = 2;
	int *pi = &i,**ppi = &pi;

	std::cout << i << " "
		<< *pi << " "
		<< **ppi; 

}
