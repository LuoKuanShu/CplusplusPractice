#include <iostream>

int main(void)
{
	int big = 0,small = 0;

	std::cout << "Enter two int number: ";
	std::cin >> big >> small;
	
	int i = 0;
	if (big < small){
		i = big;
		big = small;
		small = i;
	}

	while (small <= big){
		std::cout << small << " ";
		++small;
	}

	return 0;
}
