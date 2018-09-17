#include <iostream>

using namespace std;

string read();
void print(const string&);
void print(double);
void print(int);

int main(void){
    bool read = true;
    //cout << read() << endl;  //error,read cannot be used as a function.
    print("hello world.");
    print(5);
    //print("hello."); //invalid conversion from const char& to int.that is,can't use print(const string&);
    print(6.4); //only print(int) valid.just past 6.4 to print(int)
}

string read(){
    return "hello world.";
}

void print(const string &s){
    cout << s << endl;
}

void print(double d){
    cout << d << endl;
}

void print(int i){
    cout << i << endl;
}
