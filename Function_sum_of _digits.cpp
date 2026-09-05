#include <iostream>
using namespace std;

int sumofDigits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}


int main(){
    int n;
    cout<<"enter the number :\n";
    cin>>n;
    cout<<"sum of the digits is : "<< sumofDigits(n)<<"\n";
    return 0;
}
