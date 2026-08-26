
#include <iostream>
using namespace std;

int main() {
    int n,factor=1;
    cout<<"Enter the number:\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i == 0)
             cout<<i<<"\n";
    }

   
    return 0;
}
