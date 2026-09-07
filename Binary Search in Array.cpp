# include<iostream>
using namespace std;

int main(){
    int n,target;
    cout<<"enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of a sorted array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the target :";
    cin>>target;
    
    int ans= -1;
    int s=0,e=n-1;
    while(s <= e){
        int mid=(s+e)/2;
        if(arr[mid] == target){
            ans = mid;
            break;
            }else if(arr[mid] < target)
                s = mid + 1;
                else
                e = mid-1;
                
            
    }
    
 cout<<"The index of target is :"<<ans<<"\n";
 return 0;
   
    
}
      
