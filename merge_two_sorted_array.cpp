#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans[n+m];
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    //logic
    for(int k=0;k<n+m;k++){
        if(i<n && j<m){    
            if(a[i]<b[j] && (j<m && i<n)){
                ans[k]=a[i];
                i++;
            }
            else{
                ans[k]=b[j];
                j++;
            }
        }
    }

    if(i==n){
        for(int k = i+j;k<n+m;k++){
            ans[k]=b[j];
            j++;
        }
    }
    else{
        for(int k = i+j;k<n+m;k++){
            ans[k]=a[i];
            i++;
        }
    }

    for(int i:ans){
        cout<<i<<" ";
    }
}
    