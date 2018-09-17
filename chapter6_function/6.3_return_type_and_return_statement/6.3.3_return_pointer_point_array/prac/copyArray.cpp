#include <iostream>

using namespace std;
void *copyArray(void *dest,const void *src,std::size_t count);  //copy the data to start pointer

int main(void){
    char pc[] = "love you forever.",dst[4];
    const auto &p = copyArray(dst,pc,sizeof dst);

}


void *copyArray(void *dest,const void *src,std::size_t count){
    if (sizeof src < count){
        cout << "index out of range." << endl;
    }
    if (sizeof dest < count ){
        cout << "index out of range." << endl;
    }

    int cnt = 0;

    for (auto i : src){
        ++cnt;
        if (i > count){
            break;
        }
        *dest =char<void>(*src);
    }

    return dest;

}
