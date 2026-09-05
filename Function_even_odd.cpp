

#include <iostream>
using namespace std;

bool checkEven(int n){
    return(n%2==0);
    
}

int main(){
int num;
cout<<"enter the Number :";
cin>>num;
if(checkEven(num))
cout<<num<<" is even\n";
else
cout<<num<<" is odd\n";
return 0;
}
    
