#include <iostream>
#include <initializer_list>

// if formal parameter's count is unknow,but all of type is same,you can use initializer_list.
using namespace std;

void error_msg(initializer_list<string>  il);

int main(void){
    string expected,actual;
    cout << "enter two string" << endl;

    cin >> expected >> actual;

    if (expected != actual){
        error_msg({"functionX",expected,actual});

    }else{
        error_msg({"functionX","okay"});
    }

}

void error_msg(initializer_list<string> il){
    for (auto beg = il.begin();beg != il.end();++beg){
        cout << *beg << " " << endl;

    }

}
