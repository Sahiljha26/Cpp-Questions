#include<iostream>
using namespace std;
int main(){
    int n;
    int reverse=0;
    cout<<"Enter the number:\n";
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10 + lastdigit;
        n/=10;
    }
    cout<<"Reverse number is  :"<<reverse<<"\n";
    return 0;
}
