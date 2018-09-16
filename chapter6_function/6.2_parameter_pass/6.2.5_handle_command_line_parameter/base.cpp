#include <iostream>

using namespace std;

void say(const string &name,const string &words);

int main(int argc,char *argv[]){
    cout << argv[0] << ".cpp" << endl << endl;
    cout << "there're " << argc << " parameters." << endl;
    cout << "   " << argv[1] << "  " << argv[2] << endl;
    cout << "   " << argv[3] << "  " << argv[4] << endl;

}

void say(const string &name,const string &words){
    cout << name << " said " << words << endl;

}
