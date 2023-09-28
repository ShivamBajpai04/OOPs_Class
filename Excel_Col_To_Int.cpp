#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main(){
    string alp;
    cout<<"Enter a string: ";
    cin>>alp;
    int ans=0;
    //converting lower case to upper case
    for(int i=0;i<alp.length();i++){
        if(alp[i]>='a' && alp[i]<='z'){
            alp[i]-=32;
        }
    }
    //calculating answer
    for(int i=0;i<alp.length();i++){
        ans+=(alp[i]-'A'+1)*pow(26,alp.length()-i-1);
    }
    //printing answer
    cout<<ans;
}