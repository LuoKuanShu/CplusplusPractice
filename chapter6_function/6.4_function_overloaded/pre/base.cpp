#include <iostream>

using namespace std;

void print(const char *pc);  //receive a c-style string.
void print(const char *beg,const char *end);  //receive header and end pointer.
void print(const char *arrHead,size_t sz);  //receive a array name and is's size.
void printDirect(const char *str);

int main(void){
    //char arr[] = "i love you forever.";
    char arr[] = "hello world.";
    printDirect(arr);
}

void print(const char *pc){

    string str;

    if (pc) {
        while (*pc) {  //ensure current pointer's object pointed has initialized correctly.
            str += *pc++; // use '\0' to stop the loop      
        }

        cout << str << endl;
    }
}

void print(const char *beg,const char *end){
    for (;beg != end;++beg){
        cout << *beg;    //iterator
    }

    cout << endl;
}

void print(const char *arrHead,size_t sz){
    for (decltype(sz) i = 0;i != sz;++i){
        cout << arrHead[i];   //arrHead[] is a char,not a pointer;
    }

    cout << endl;
}

void printDirect(const char *str){
    cout << str;
}
