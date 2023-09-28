#include<iostream>
using namespace std;
void countVowel(string a){
    int count=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            count++;
        }
    }
    if(count>=a.length()/2){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
string numToAlpha(int num){
    string ans="";
    while(num>0){
        int rem = (num-1)%26;
        ans = char('A'+rem) +ans;
        num=(num-rem)/26;
    }
    return ans;
}
void strength(string a){
    bool strong=false;
    for(int i=0;i<a.length();i++){
        if(a[i]=='@' || a[i]=='#' || a[i]=='*' || a[i]=='$'){
            strong=true;
            break;
        }
    }
    if(strong){
        cout<<"Strong";
    }
    else{
        cout<<"Weak";
    }
}
void printAlpha(int n){
    for(int i=1;i<=n;i++){
        cout<<numToAlpha(i)<<" - "<<i<<endl;
    }
}
void seqChecker(string s,string a){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==a[count]){
            count++;
        }
    }
    if(count==a.length()){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    string a,b;
    cin>>a>>b;
    seqChecker(a,b);
}