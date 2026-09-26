#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *p = &x; //pointer variable stores the address 
    
    
    *p = 50;
    
    cout<<x<<endl;
    return 0;
}
