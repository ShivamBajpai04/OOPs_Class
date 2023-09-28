//Max product of 3 int in an array
//INT_MIN<arr[i]<INT_MAX
//#solved
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    //Sorting O(nLog(n))
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        if (n < 3){
            cout<< -1;
            break;
        }
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<max(arr[0]*arr[1]*arr[n-1],arr[n-3]*arr[n-2]*arr[n-1]);
    int max1 = INT_MIN,max2 = INT_MIN,max3 = INT_MIN;
    int min1 = INT_MAX,min2 = INT_MAX;
    for(int i = 0;i < n; i++){
        
    }
    /*
    //Brute force O(n^3)
    int max1 = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int prod = arr[i]*arr[j]*arr[k];
                if (max1<prod){
                    max1=prod;
                }
            }
        }
    }
    cout<<max1<<endl;
    */
}