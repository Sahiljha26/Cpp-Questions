# include<iostream>
using namespace std;

int main(){
    int n,temp;
    cout<<"enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
        
    }
    int s=0,e=n-1;
    while(s<e){
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
    
    for(int i=0;i<n;i++){
        int arr[i] ;
        
    }
       cout<<"The reversed Array is :"<<arr[i]<<"\n";
       cout<<"\n";
       return 0;
}
      
