#include <iostream>
using namespace std;

void swapNumbers( int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}


int main(){
    int x,y;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    swapNumbers(x,y);
    cout<<"After swap:x="<<x<<",y="<<y<<"\n";
    return 0;
}
