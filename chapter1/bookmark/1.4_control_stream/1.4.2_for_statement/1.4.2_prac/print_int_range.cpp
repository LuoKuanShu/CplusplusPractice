#include <iostream>
#include <algorithm>

int main(void)
{

	int a = 0,b = 0;

	std::cout << "enter two int number : ";
	std::cin >> a >> b;
	for (int i = std::min(a,b);i <= std::max(a,b);++i)
		std::cout <<  i << " ";

	return 0;
}
