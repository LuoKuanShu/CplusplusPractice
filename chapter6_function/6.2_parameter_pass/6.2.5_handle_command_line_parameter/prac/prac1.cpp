#include <iostream>
#include <vector>

using namespace std;

string getString(const char *p);

main(int args,char *argv[]){
    if (args != 3){
        cout << "invalid parameter's count.";
        return -1;

    }

    string s1,s2;
    s1 = getString(argv[1]);
    s2 = getString(argv[2]);

    cout << s1+s2 << endl;
    

}

string getString(const char *p){
    string res;

    if(p){
        while(*p){
            res += *p++;
        }
        
        return res;
    }

    return res;

}
