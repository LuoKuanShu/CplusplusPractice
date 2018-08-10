#include <iostream>
#include <climits>


int main(void){
	unsigned u = 10;
	int i = -42;

	std::cout << "unsigned u is 10,and int i is -42."
		<< std::endl;

	std::cout << "the result of i + i is "
		<< i + i << std::endl;
	std::cout << "but the result of expression u + i is  "
		<< u + i << std::endl;
	std::cout << "and the biggest value of unsigned int is"
		<< UINT_MAX << std::endl;

	unsigned int q  = -1;
	std::cout << "assigne -1 to unsigned int i,"
		"and the final i is "
		<< q << std::endl;


	std::cout << std::endl;

	unsigned char c = 5;
	int my_int = -2;

	std::cout << "the unsigned char c is 5,and the int my_int is -2."
		"the result of  expression c + my_int is "
		<< c + my_int <<std::endl;
	my_int = -5;
	std::cout << "now change the int my_int to -5,then the result of expression c + my_int is"
		<< c + my_int << std::endl;
	my_int = -10;
	std::cout << "now change my_int to -10 again,the result of expression c + my_int is"
		<< c + my_int << std::endl;



	std::cout << std::endl;


	unsigned char cc = -5;
	std::cout << "assign unsigned char cc to -5, the final cc is "
		<< cc << std::endl;
	cc = -8;
	std::cout << "change cc to -8,and the final cc is "
		<< cc << std::endl;

	std::cout << std::endl;

	long long number_count = UINT_MAX;
	std::cout << "the biggist unsigned int is "
		<< UINT_MAX << std::endl;
	std::cout << "but the availeble acount of number that unsigned int can express is "
		<< number_count + 1  << std::endl;
	unsigned int ii = -10;
	std::cout << "assigned unsigned int ii  to -10,and print the current ii:  "
		<< ii << std::endl;
	ii = -4;
	std::cout << "now change ii to -4,then print ii again:  "
		<< ii << std::endl;

	return 0;
}
