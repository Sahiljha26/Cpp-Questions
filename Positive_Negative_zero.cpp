
#include <iostream>
using namespace std;

int main (){
float n;
cout<<"Enter a number  : ";
cin>> n ;

if (n>0){
    cout<<" Positive number :"<<n<< "\n";
} else if(n<0){
    cout<<" Negative Number  :"<<n<<"\n";
}else{
    cout << " Zero  "<< n <<"\n";
}
return 0;
}

