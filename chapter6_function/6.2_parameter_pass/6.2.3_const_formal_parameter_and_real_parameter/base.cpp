#include <iostream>

using namespace std;

int main(void){
    const int i = 2;
    int i2 = i;

    //int * const pci = &i;  // &i is a read-only int*,while int * const pci is a pointer that can modify the object that it point.so it's wrong.
    //auto pci = &i;  
   // *pci = 10;

    cout << *pci << endl;

}
