#include <iostream>
#include <initializer_list>

// if formal parameter's count is unknow,but all of type is same,you can use initializer_list.
using namespace std;

struct ErrorCode {
    unsigned codec = 0;
};

void error_msg(ErrorCode code,initializer_list<string>  il);



int main(void){
    string expected,actual;
    ErrorCode code;

    cout << "enter two string" << endl;

    cin >> expected >> actual;

    if (expected != actual){
        code.codec = 1;
        error_msg(code,{"functionX",expected,actual});

    }else{
        code.codec = 2;
        error_msg(code,{"functionX","okay"});
    }

}

void error_msg(ErrorCode code,initializer_list<string> il){

    cout << "the error code is " << code.codec << ": " << endl;
    for (auto beg = il.begin();beg != il.end();++beg){
        cout << "   " <<  *beg << " ";

    }
    cout << endl;

}
