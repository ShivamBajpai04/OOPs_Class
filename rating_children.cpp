#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={0,3,1,1,0,3,5,6,4,1};
    vector <int> ans(v.size(),1);
    
    for(int j=0;j<v.size()-1;j++){
        if(v[j]<v[j+1]){
            ans[j+1]=ans[j]+1;
        }
    }
    for(int j=1;j<v.size();j++){
        if(v[j-1]<v[j]){
            ans[j]=ans[j-1]+1;
        }
    }
    //print ans array
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    int sum=0;
    for(int i=0;i<ans.size();i++){
        sum+=ans[i];
    }
    cout<<sum;
}