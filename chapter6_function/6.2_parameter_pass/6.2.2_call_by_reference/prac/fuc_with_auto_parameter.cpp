#include <iostream>

using namespace std;

void say(const string &sb,auto &words);

int main(void){
    string sb,text;
    cin >> sb >> text;

    say(sb,text);
}

void say(const string &sb,auto &words){
    cout << sb << " said to me: " << words << endl;

}
