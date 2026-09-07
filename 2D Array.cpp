# include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter the Number of Rows :";
    cin>> rows;
    cout<<"Enter the Number of cols :";
    cin>>cols;
    
    
    int mat[rows][cols];
    
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            cout<<"Enter element of mat["<<i<<"]["<< j<< "] = ";
            cin>>mat[i][j];
            }
            cout <<endl;
}

cout << "------Matrix-------" <<endl;
for(int i=0; i< rows; i++){
    for(int j=0; j<cols;j++){
        cout << mat[i][j] <<" ";
    }
    cout <<endl;
    
}
return 0;
}
