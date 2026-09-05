# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    bool isSorted=true;
    for(int i=0;i<n-1;i++){
       if(arr[i+1]<arr[i]){
       isSorted=false;
       break;
       }
     }
     if(isSorted)
    cout<<"Array is Sorted \n";
    else
    cout<<"Array is not sorted\n";
    return 0;
}
