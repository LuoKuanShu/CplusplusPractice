#include <iostream>

int main(void)
{
	int sum = 0;
	for (int a = 1;a <= 10;++ a)
		sum += a;
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}
