// 4 4
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16
//op
// 13 9 5 1
// 6 11 16
// 12 8 4
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    //input of 2-d array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //printing
    for(int j=n-1;j>=0;j--){
        cout<<arr[j][0]<<" ";
    }
    for(int j=1;j<m-1;j++){
        cout<<arr[j][j]<<" ";
    }
    for(int j=n-1;j>=0;j--){
        cout<<arr[j][n-1]<<" ";
    }
}