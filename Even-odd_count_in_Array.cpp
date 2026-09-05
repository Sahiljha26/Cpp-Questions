# include<iostream>
using namespace std;

int main(){
    int n,even=0,odd=0;
    cout<<"enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++){
       if(arr[i]%2==0)
       even++;
       else
       odd++;
     }
    cout<<"Numbewr of even elements in an array : "<<even<<"\n";
    cout<<"Number of odd elements in an array : "<<odd<<"\n";
    return 0;
}
