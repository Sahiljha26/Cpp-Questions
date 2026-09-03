#include<iostream>
using namespace std;
int main(){
    int n;
    int reverse=0;
    cout<<"Enter the number:\n";
    cin>>n;
    int temp=n;
    while(temp>0){
        int lastdigit=temp%10;
        reverse=reverse*10 + lastdigit;
        temp/=10;
    }
    cout<<((reverse==n)?"Palindrome Number\n":"Not a palindrome number\n");
    return 0;
}
