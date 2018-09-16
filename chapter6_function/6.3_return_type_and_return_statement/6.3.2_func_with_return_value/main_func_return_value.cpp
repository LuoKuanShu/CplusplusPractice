#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
    cout << "enter a int value,1 for success,0 for fail." << endl;

    int statu = 0;

    cin >> statu;

    if (statu == 1){
        return EXIT_SUCCESS;

    }
    if (statu == 0){
        return EXIT_FAILURE;

    }
}
