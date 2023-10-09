#include <iostream>
using namespace std;

int presum(int arr[],int n, int i){
    int sum=0;
    for(int j=0;j<=i;j++){
        sum+=arr[j];
    }
    return sum;
}

int postsum(int arr[],int n, int i){
    int sum=0;
    for(int j=i;j<n;j++){
        sum+=arr[j];
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair <int,int> mini;
    mini.first=INT_MAX;
    mini.second=INT_MAX;

    for(int i=0;i<n;i++){
        cout<<presum(arr,n,i)<<" "<<postsum(arr,n,i)<<" "<<mini.first<<" "<<mini.second<<endl;
        if(presum(arr,n,i)+postsum(arr,n,i)<mini.first){
            if(mini.first==presum(arr,n,i)+postsum(arr,n,i)){
                mini.second=min(i+1,mini.second);
            }
            else{
                mini.second=i+1;
            }
            mini.first=presum(arr,n,i)+postsum(arr,n,i);
                
                
        }
    }
    cout<<mini.second;
    return 0;
}