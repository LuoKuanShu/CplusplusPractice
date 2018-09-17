#include <iostream>

using namespace std;

//typedef string arrS[2];
using arrS = string [2];

arrS &arrRef(int i);

string arr1[] = {"hello","world"};
string arr2[] = {"world","hello"};

int main(void){
    cout << "enter: " << endl;
    int i = 0;
    cin >> i;

    for (auto s : arrRef(i)){
        cout << s << " ";
    }
}

arrS &arrRef(int i){
    return (i % 2) == 0 ? arr1 : arr2;
}

