
#include <iostream>
using namespace std;

int main() {
    int amount;
    double dis=0, total_amount = 0;
    cout<<"Enter the amount:";
    cin>>amount;

    if(amount>=0 && amount<= 5000)
    dis = 0;
    else if(amount>5000 && amount <=7000)
    dis = 0.05;
    else if(amount > 7000 && amount <= 9000)
    dis = 0.1;
    else 
    dis = 0.2;
    total_amount = amount - (amount* dis);
    cout << "Bill = " << total_amount <<"\n";
    return 0;
}
