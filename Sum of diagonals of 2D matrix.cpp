#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter the number of rows:";
    cin>>rows;
    cout<<"Enter the number of cols:";
    cin>>cols;
    
    int mat[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"Enter elements of mat["<<i<<"]["<<j<<"]:";
            cin>>mat[i][j];
        }
        cout<<endl;
    }
    
    int sum=0;
    cout<<"------Matrix------"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<mat[i][j]<<" ";
            if(i==j||(i+j)==rows-1)
            sum+=mat[i][j];
        }
        cout<<endl;
    }
    cout<<"sum is:"<<sum<<endl;
    return 0;
}
