#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string s="abbbbccdd";
    unordered_map <char,pair<int,int>> li;
    for(int i=0;i<s.length();i++){
        if(li.find(s[i])==li.end()){
            li[s[i]]=make_pair(1,i);
        }
        else{
            li[s[i]].first++;
        }
    }
    for(int i=0;i<s.length();i++){
        if(li[s[i]].first==1){
            cout<<s[i]<<" "<<li[s[i]].second;
            break;
        }
    }
    return 0;
}