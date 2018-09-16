#include <iostream>
#include <initializer_list> 


using namespace std;

int main(void){
    initializer_list<int> il{1,3,3};
    
    /*
    for (const auto &i : il){  //i added with const,whille modify it,const will raise error instead of initializer_list
        cout << i << endl;

    }
    */

    for (auto i : il){
        cout << i << " ";
    }

}
