# include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
     }
    cout<<"Sum of the elements of an array : "<<sum<<"\n";
    return 0;
}
