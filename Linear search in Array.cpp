# include<iostream>
using namespace std;

int main(){
    int n,target;
    cout<<"enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the target :";
    cin>>target;
    
    int ans= -1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
        ans= i;
        break;
        }
            
        
    }
    
 cout<<"The index of target is :"<<ans<<"\n";
 return 0;
   
    
}
      
