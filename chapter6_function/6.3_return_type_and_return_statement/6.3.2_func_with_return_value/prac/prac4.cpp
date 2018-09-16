#include <iostream>
#include <vector>

using namespace std;

void print(vector<string>::const_iterator p,decltype(p) end);

int main(void){
    vector<string> v{"i","love","you"};
    print(v.cbegin(),v.cend());
}

void print(vector<string>::const_iterator p,decltype(p) end){
    if (p != end){
        cout << *p << " ";
        print(++p,end);
    }else{
        cout << endl << "END.";
    }
}
