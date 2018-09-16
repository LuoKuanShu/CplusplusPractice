#include <iostream>

using namespace std;

string returnLocal();

int main(void){
    cout << returnLocal().size() << endl;
    
}

string returnLocal(){
    string s = "hello";
    return s;

}
