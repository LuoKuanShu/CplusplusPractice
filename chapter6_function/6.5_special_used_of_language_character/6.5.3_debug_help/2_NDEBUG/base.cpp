#include <iostream>

using namespace std;

int main(void){
    string s;

    cout << "enter a string: " << endl;
    cin >> s;

    #ifndef NDEBUG
        cout << "ERROR: " << endl;
        cout << "   date: " << __DATE__ << endl;
        cout << "   time: " << __TIME__ << endl;
        cout << "   from file: " << __FILE__ << endl;
        cout << "   from func: " << __func__ << endl;
        cout << "   line: " << __LINE__ << endl;
    #endif 

    cout << "your input is " << s << endl;
}
