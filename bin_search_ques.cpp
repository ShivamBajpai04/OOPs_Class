// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int sum(vector <int> v,int mid){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=max(0,v[i]-mid);
    }
    return sum;
}
int main(){
    vector <int> v={48,42,40,36,28,15,8};
    int s=0;
    int e=INT_MIN;
    int target=30;
    for(int i=0;i<v.size();i++){
        e=max(e,v[i]);
    }
    int ans;
    int mid=(s+e)/2;
    while(s<e){
        if(sum(v,mid)>=target){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }

    cout<<ans;

}