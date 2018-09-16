#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

void print(vector<string>::const_iterator p,decltype(p) end);
string get_string(char *p);

int main(int argc,char *argv[]){

    vector<string> v;

    for (size_t i = 1;i != argc;++i){
        v.push_back(get_string(argv[i]));
    }

    //output
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

string get_string(char *p){
    string s;
    if (p){
        while(*p){
            s += *p++;
        }
        return s;
    }
    return {" "};
}
