#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int main(){
//     string name;
//     int roll_no;
//     cin>>roll_no;
//     getchar();
//     getline(cin,name);
//     cout<<name<<" "<<roll_no;
// }
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
    //output of 2-d array
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[j][i]<<" ";
            }    
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}