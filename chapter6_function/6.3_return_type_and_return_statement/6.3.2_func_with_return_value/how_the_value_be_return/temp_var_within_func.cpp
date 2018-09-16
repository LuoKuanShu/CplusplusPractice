#include <iostream>

//f(1,"girl",'s')  --> girl
//f(3,"girl",'s') -- >  girls

using namespace std;

string make_plural(size_t ctr,const string &word,const string &ending);

int main(void){
    string word = "box";
    cout << make_plural(1,word,"es") << endl;
}

string make_plural(size_t ctr,const string &word,const string &ending){
    return (ctr > 1)? word+ending : word;
}

