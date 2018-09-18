#include <iostream>
#include <string>

using namespace std;

typedef string::size_type sz;
string screen(sz ht = 24,sz wid = 80,char background = ' ');     //give each formal arguement a default value.
                                                        
int main(void){                                            
    screen(); 
    screen(1);
    screen(1,2);
    screen(1,2,'#');

    //reen(,,"end."); //can't omit the previous arguement,but we can omit the last arguement.
    screen('8');

}                                                          
                                                           
string screen(sz ht,sz wid,char background){             
    cout << "Screen:  " << endl;                           
    cout << "   height:  " << ht << endl;                  
    cout << "   width:  " << wid << endl;                  
    cout << "   backgroud:  " << background  << endl;
    cout << endl;
    return "end";
}
