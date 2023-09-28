#include<iostream>
using namespace std;

int c_sum(int arr[],int s,int e){
    int sum=0;
    for(int i=s;i<e;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>>k;
    
    int maxi=INT_MIN;
    //sliding window O(k^2)
    for(int i=0;i<k;i++){
        maxi=max(c_sum(arr,i,n-k+i-1),maxi);
    }
    //optimal O(n)
    int maxj=INT_MIN;
    for(int i=0;i<n;i++){
        if(i>0){
            arr[i]=arr[i]+arr[i-1];
        }
    }
    //[1,2,3,4,5]
    //[1,3,6,10,15]
    for (int i=0;i<n-k;i++){
        if(i>0){
            maxj=max(maxj,arr[n-k+i-1]-arr[i-1]);
        }
        else{
            maxj=max(maxj,arr[n-k+i-1]);
        }

    }
    cout<<"Brute Force(Sliding Window): "<<maxi<<endl<<"Optimal: "<<maxj;
}