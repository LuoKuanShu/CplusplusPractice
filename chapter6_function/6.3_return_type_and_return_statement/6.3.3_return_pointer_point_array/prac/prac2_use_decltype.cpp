#include <iostream>

using namespace std;

string arr[2] = {"hello","world"};
string arr2[2] = {"world","hello"};

decltype(arr) &arrRef(int i);

int main(void){
    cout << "enter a int value: " << endl;
    int i = 0;
    cin >> i;

    for (auto s : arrRef(i)){
        cout << s << " ";
    }
}

decltype(arr) &arrRef(int i){
    return (i % 2) == 0 ? arr : arr2;
}
