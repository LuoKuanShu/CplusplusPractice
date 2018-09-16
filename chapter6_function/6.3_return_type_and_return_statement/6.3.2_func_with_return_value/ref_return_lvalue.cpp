#include <iostream>

using namespace std;

char &get_char(string &str,string::size_type index);

int main(void){
    string s = "hello world.";
    get_char(s,4) = 'T';

    cout << s << endl;

}

char &get_char(string &str,string::size_type index){
    if (index < 0 || index >= str.size()){
        cout << "index out of range." << endl;
        throw runtime_error("index out of range.");
    }
    
    return str[index];
}
