#include <iostream>

using namespace std;

void print(const char *pc);  //receive a c-style string.
void print(const char *beg,const char *end);  //receive header and end pointer.
void print(const char *arrHead,size_t sz);  //receive a array name and is's size.

int main(void){
    char arr[] = "i love you forever.";
    print(begin(arr),end(arr));
}

void print(const char *pc){

    string str;

    if (pc) {
        while (*pc) {  //ensure current pointer's object pointed has initialized correctly.
            str += *pc++;       
        }

        cout << str << endl;
    }
}

void print(const char *beg,const char *end){
    for (;beg != end;++beg){
        cout << beg << endl;
    }

    cout << endl;
}
