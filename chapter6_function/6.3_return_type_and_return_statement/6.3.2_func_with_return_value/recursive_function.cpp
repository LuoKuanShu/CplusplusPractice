#include <iostream>

using  namespace std;

int factorial(int val);

int main(void){
    cout << factorial(5) << endl;
}

int factorial(int ival){
    if (ival > 1){
        return factorial(ival - 1) * ival;
    }

    return 1;

}
