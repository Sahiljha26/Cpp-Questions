#include <iostream>
using namespace std;

int findFactorial(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}


int main(){
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    cout<<"Factorial of "<<n<<" is : "<<findFactorial(n)<<"\n";
    return 0;
}
