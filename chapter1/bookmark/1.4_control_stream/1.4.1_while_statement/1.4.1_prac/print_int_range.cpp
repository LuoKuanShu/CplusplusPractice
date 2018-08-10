#include <iostream>

/*
 * print each number between two int that appointed by user.
 */

int main(void)
{
	int a = 0,b = 0;

	std::cout << "please enter two number seperated by blank space,the first biger than last :  " ;
	std::cin >> a >> b;

	while (b <= a){
		std::cout << b << " ";
		++b;
	}
	
	std::cout << std::endl << "END.";

	return 0;
}
