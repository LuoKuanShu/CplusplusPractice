#include <iostream>

using namespace std;

//constexpr int new_sz(){return 43;}; //right.
constexpr int new_sz();  //the constexpr function must definition not declaration before using it.
constexpr int new_sz(){ return 43; }


constexpr int ival = new_sz();

int main(void){
    constexpr int foo = new_sz();
    cout << ival << endl;
    cout << foo << endl;
}


//error,used before definition.
/*
constexpr int new_sz() {
    return 42;
}

*/
