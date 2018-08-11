#include <iostream>
#include <typeinfo>

int main(void){
	int i = 0;
	double d = 9;
	long l;
	long long ll;
	short st;
	float fl;
	char c;
	std::string s;

	std::cout << " int : "
		<<typeid(i).name() << std::endl;
	std::cout << " double : " 
		<< typeid(d).name() << std::endl;
	std::cout << " long : " 
		<< typeid(l).name() << std::endl;
	std::cout << "long long : " 
		<< typeid(ll).name() << std::endl;
	std::cout << " short : " 
		<< typeid(st).name() << std::endl;
	std::cout << " float : " 
		<< typeid(fl).name() << std::endl;
	std::cout << " char : " 
		<< typeid(c).name() << std::endl;
	std::cout << " string : " 
		<< typeid(s).name() << std::endl;
	return 0;

}
