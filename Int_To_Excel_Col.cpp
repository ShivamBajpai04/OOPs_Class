#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    string ans="";
    while(num>0){
        int rem = (num-1)%26;
        ans = char('A'+rem) +ans;
        num=(num-rem)/26;
    }
    cout<<ans;
}