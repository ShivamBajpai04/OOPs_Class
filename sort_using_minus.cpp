#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int i=n-1;i>0;i--){
        if(arr[i]>=arr[i-1]){
            continue;
        }
        else{
            for(int j=0;j<i;j++){
                maxi=max(arr[j],maxi);
            }
        }
    }
    cout<<maxi;
}