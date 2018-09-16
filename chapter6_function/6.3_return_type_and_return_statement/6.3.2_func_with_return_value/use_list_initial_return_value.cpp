#include <iostream>
#include <vector> 
#include <initializer_list>

using namespace std;

vector<string> make_vector();

int main(void){
    vector<string> v(make_vector());

    for (auto s : v){
        cout << s << " ";
    }

}

vector<string> make_vector(){
    return {"hello","world"};

}
