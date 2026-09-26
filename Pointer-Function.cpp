#include<iostream>
using namespace std;

void change(int*p){
    *p = 100;
}

int main(){
    int x=10;
    
change(&x);
cout<<x;
}
