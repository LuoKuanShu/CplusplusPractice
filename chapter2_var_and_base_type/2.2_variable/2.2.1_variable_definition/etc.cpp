#include <iostream>

std::string getPersonName(){
	std::string name("mnason");
	return name;
}

int main(void){
	int sum = 0, value , units_sold = 0;  
	std::string book("love you");
	

	std::cout << book << std::endl;
	std::cout << getPersonName() << std::endl;

	return 0;

}
