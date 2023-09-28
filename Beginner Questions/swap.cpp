#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    for(int i=0;i<(n/2)*2;i+=2){
        swap(str[i],str[i+1]);
    }
    cout<<str;
}