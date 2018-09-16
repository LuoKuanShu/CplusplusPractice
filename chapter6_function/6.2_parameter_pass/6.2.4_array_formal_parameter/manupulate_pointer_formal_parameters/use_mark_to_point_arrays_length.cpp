#include <iostream>

using namespace std;

void print(const char *p);

int main(void){
    //it's like c-style-string
    print("hello world.");

}

void print(const char  *p){
    if(p){
        while(*p){
            cout << *p++;
        }
    }
}
