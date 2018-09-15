#include <iostream>

using namespace std;

void test(auto &p);

int main(void){
    string s = "hello",*ps = &s;
    test(ps);
}

void test(auto &p){
    cout << p << endl;

}
