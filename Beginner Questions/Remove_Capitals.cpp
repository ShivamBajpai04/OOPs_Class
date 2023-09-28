#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str.erase(str.begin() + i);
        }
    }
    cout<<str;
}