#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int i=2;
    while(i*i<=n){
        count++;
        i++;
    }
    cout<<count+1;
}