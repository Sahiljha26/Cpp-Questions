# include<iostream>
using namespace std;

int main(){
    int n,target;
    cout<<"enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of a  array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for ( int i=0; i<n-1; i++){
        for( int j=0; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
            // swap 
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
cout<<"The Sorted Array is :\n";
for (int i=0;i<n;i++){
    cout<<arr[i]<<"";
    
}
return 0;
    
}
    
 
      
