#include <iostream>

using namespace std;

int factorial(int val);

int main(void){
    int i = 0;
    cout << "enter a int value: " << endl;

    cin >> i;

    cout << factorial(i) << endl;
}

int factorial(int val){
    if (val != 0){
        cout << val << " ";
        return factorial(val - 1) * val;
    }
    return 1;
}
