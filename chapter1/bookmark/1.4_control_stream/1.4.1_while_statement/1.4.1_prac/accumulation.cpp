#include <iostream>

/*
 * add each number between 50 and 100 to sum
 */

int main(void)
{
	int start = 50,end = 100;
	int sum = 0;

	while (start <= end)
	{
		sum += start;
		++start;
	}
	
	std::cout << "The sum of start " << 50 << " and end " << 100 << " is "  << sum << std::endl;
	return 0;
		
}
