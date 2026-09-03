#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the number:\n";
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        sum+=lastdigit;
        n/=10;
    }
    cout<<"sum of digits :"<<sum<<"\n";
    return 0;
}
