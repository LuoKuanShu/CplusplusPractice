#include <iostream>

using namespace std;

string (*pointerS(int i)) [2];

string arr1[] = {"hello","world"};
string arr2[] = {"world","hello"};

int main(void){
    cout << "enter: " << endl;
    int i = 0;
    cin >> i;

    for (auto s : (*pointerS(i))){
        cout << s << " ";
    }
}

string (*pointerS(int i)) [2]{
    return (i % 2) == 0 ? &arr1 : &arr2;    
}
