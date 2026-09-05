# include<iostream>
using namespace std;

int main(){
    int n,temp,k;
    cout<<"enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the value of k :";
    cin>>k;
    for(int r=0;r<k;r++){
        temp=arr[0]; 
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
        
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
       return 0;
}
      
