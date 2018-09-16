#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

int sum(vector<int> v);

int main(void){
    vector<int> v;
    cout << "enter a seriace of int date:" << endl;

    int data = 0;

    while (cin >> data){
        v.push_back(data);

    }

    
    cout << "the sum is " << sum(v) << endl;
}

int sum(vector<int> v){
    int all = 0;

    for (auto beg = v.begin();beg != v.end();++beg){
        all += *beg;

    }

    return all;

}
