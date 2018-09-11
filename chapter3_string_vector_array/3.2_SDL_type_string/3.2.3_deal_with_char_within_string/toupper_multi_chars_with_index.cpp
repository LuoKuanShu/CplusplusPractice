#include <iostream>
#include <string>

using namespace std;

int main(void){
	string world;
		
	//input world.
	while (cin >> world){
		if(isalpha(world[0])){
			//upper the first char.
			world[0] = toupper(world[0]);
			cout << world << " ";

		}else{

			//output punct.
			cout << world;
		}

	

	}

}
