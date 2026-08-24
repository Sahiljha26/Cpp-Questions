
#include <iostream>
using namespace std;

int main() {
    int unit;
     float total_bill = 0;
    cout<<"Enter the unit:";
    cin>>unit;

    if(unit>0 && unit<= 100){
    total_bill = unit*4.2;
    }else if(unit >= 101 && unit  <=200){
    unit-=100;
    total_bill = 100*4.2 + unit*6;
    }else if(unit>=201 && unit <= 400){
    unit-=200;
    total_bill = 100*4.2 + 100*6 + unit*8;
    }else {
    unit-=400;
    total_bill= 100*4.2 + 100*6 + 100*8 + unit *13;
    total_bill= unit*13;}
    
    cout << "Bill = " << total_bill  << "Rupees" <<"\n";
    return 0;
}
