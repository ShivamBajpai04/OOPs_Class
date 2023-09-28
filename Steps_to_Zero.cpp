#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        int digit=n%10;
        int dig10=n/10;
        n-= max(digit,dig10);
        count++;
    }
    cout<<count;
}