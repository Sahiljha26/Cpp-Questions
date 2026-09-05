# include <iostream>
using namespace std;


int power(int base, int exp){
    int result = 1;
    for(int i =1;i<=exp;i++){
        result*=base;
    }
    return result;
    
}

int main(){
    int base,exp;
    cout<<"Enter the base :";
    cin>>base;
    cout<<"Enter the exp:";
    cin>>exp;
    cout<<base <<"raise to the power"<< exp <<"is" <<power(base,exp)<<"\n";
    return 0;
}
