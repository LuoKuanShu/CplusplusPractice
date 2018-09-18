#include <iostream>

using namespace std;

int main(void){
    int index = 8;
    void print(int i = index);  //arthough the func declaration in local scope,but it still not allow to use local obj as default value.


    print();
}

void print(int i){
    cout << i << endl;

}
