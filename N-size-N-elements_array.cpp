# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of an array\n";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    
    cout<<"\n Elements of an array are :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}
