#include <iostream>

int main(void)
{
	int sum = 0;

	for (int a = 50;a <= 100;++a){
		sum += a;
	}

	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

	return 0;
}
