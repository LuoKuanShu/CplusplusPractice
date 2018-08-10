#include <iostream>

int main(void)
{	int sum = 0,value = 0;

	std::cout << "Enter a serias of int number seperated with blank space,end with ctrl + d : " << std::endl;

	while (std::cin >> value){
		sum += value;
	}

	std::cout << "Sum of a serias of int is " << sum << std::endl;

	return 0;
}
