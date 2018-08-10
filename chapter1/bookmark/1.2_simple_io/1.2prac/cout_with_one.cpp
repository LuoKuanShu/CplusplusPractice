#include <iostream>

int main(void)
{
	std::cout << "Enter two number :" <<
	std::endl;

	int a = 0,b = 0;

	std::cin >> a >> b;

	std::cout << "the sum of ";
	std::cout << a;
	std::cout << " and ";
	std::cout << b;
	std::cout << " is " ;
	std::cout << a + b;
	std::cout << std::endl;

	return 0;
}
