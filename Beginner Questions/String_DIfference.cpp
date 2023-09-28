#include <iostream>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    for(int i=0;i<max(s1.length(),s2.length());i++){
        if(s1[i]!=s2[i]){
            cout<<s1[i];
        }
    }
}