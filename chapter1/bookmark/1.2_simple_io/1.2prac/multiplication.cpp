#include <iostream>

int main(void)
{
	int a = 0,b = 0;  //definition of two  int var.
	std::cout << "please enter two int number sepetated with blank : " << std::endl;

	std::cin >> a >> b;

	std::cout << "the multiplication result of the two number" << a << "and " << b << " is " << a * b << std::endl;

	return 0;
}
