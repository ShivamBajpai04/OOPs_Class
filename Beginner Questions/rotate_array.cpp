#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int s,int e){
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void rotate_k(int arr[],int n,int k){
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    rotate_k(arr,n,k);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}