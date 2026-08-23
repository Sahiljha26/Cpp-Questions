
#include <iostream>
using namespace std;

int main (){
int year;
cout<<"Enter year  : ";
cin>> year ;

if (year % 400==0){
    cout<<" Leap year  :"<<year<< "\n";
} else if(year % 100==0){
    cout<<" Not a Leap Year   :"<< year <<"\n";
}else if(year % 4 ==0){
    cout << " Leap year   "<< year  <<"\n";
} else {
    cout <<"Not a leap year"<< year<<"\n";

}
return 0;
}

