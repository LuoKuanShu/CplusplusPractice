#include <iostream>
#include <cassert>

using namespace std;

bool isBig(const string &word){
   return (word[0] >= 'A' && word[0] <= 'Z')? true : false;
}

int main(void){
    string word;
    cout << "enter a word with upper char: " << endl;
    cin >> word;

    assert(isBig(word));

    cout << "your input: " << word << endl;
}


