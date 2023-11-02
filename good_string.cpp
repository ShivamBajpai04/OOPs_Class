#include <iostream>
using namespace std;

bool isgood(string s){
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            return false;
        }
    }
    return true;
}

int main() {
    //shivam has string s while shiva has string t both contain contain binary digits a string x of length k is good iff xi!=xi+1
    //shivam wants to make s good to do this he can do the following operations any number of times. insert t to any postion of s, please tell shivam if its possible to make s good.
    string s,t;
    cin>>s>>t;
    string temp;
    if(!isgood(t) || t[0] != t[t.length()-1]){
        cout<<"NO based on t";
        return 0;
    }
    
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            if(s[i]==t[0]){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}