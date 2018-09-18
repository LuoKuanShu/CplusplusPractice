#include <iostream>

using namespace std;

//right
inline string make_plural(size_t ctr,const string &str,const string &ending){
    return (ctr > 1) ? str + ending : str;
}

inline int take_small(int ival1,int ival2){
    if (ival1 > ival2){
        return ival2;
    }else{
        return ival1;
    }
}

int main(void){

    /*
    string s = "box";
    cout << make_plural(2,s,"es") << endl;
    */


}
