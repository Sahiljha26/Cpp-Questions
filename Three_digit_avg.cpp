#include <iostream>
using namespace std;

int main() {
    int a,b,c, sum =0, avg = 0;
    cout << "Enter the three numbers :";
    cin >>a>>b>>c;

    sum = a+b+c;
    avg = sum/3;
    cout << "Average :" <<avg<<"\n";
    
    return 0;
}
