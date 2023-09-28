#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void goUp(int *row,int*col){
    
}
int main(){
    int n=3;
    int arr[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int i =1;
    int row=n/2,col=n-1;
    arr[row][col]=i;
    i++;
    while(i<=9){
        row=(row-1)%3;
        col=(col+1)%3;
        if(arr[row][col]!=0){
            row=(row+1)%3;
            col=(col-2)%3;
        }
        arr[row][col]=i;
        i++;
    }
    //print matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}   