#include <iostream>

using namespace std;


string::size_type find_char (const string &s,char c,string::size_type &occurs);

int main(void){

    string str;
    char c = ' ';

    string::size_type occurs = 0;
    decltype(occurs) fir = 0;

    cout << "enter a string and a char seached: " << endl;

    cin >> str >> c;

    fir = find_char(str,c,occurs);

    //output 
    if (occurs >= 1){
        cout << "the char " << c << " occurs " << occurs << " times." << endl;
    }else{
        cout << "none occurs." << endl;
    }

}

string::size_type find_char (const string &s,char c,string::size_type &occurs){
    auto pos = s.size();
    occurs = 0;

    for (decltype(pos) i=0;i != s.size();++i){
        if(s[i] == c){
            if (pos ==s.size()){
                pos = i;    // just record once time.
            }

            ++occurs;
                
        }

    }


    return pos;
}
