# include<iostream>
using namespace std;

int main(){
    int n,target=3,count=0,sum=0;
    cout<<"enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n ; j++){
            sum+=arr[j];
            if(sum==target)
            count++;
        }
    }
    
 cout<<"The number of sub arrays is:"<<count<<"\n";
 return 0;
   
    
}
      
