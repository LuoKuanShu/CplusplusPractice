#include <iostream>

using namespace std;

const string& returnLocal(int tag);

int main(void){
    cout << "enter a int value: " << endl;
    int i = 0;

    cin >> i;

    cout << returnLocal(i) << endl;

}

const string& returnLocal(int tag){
    string s = "hello";
    if (tag == 0){
        return s;
    }
    return "hello";
}
