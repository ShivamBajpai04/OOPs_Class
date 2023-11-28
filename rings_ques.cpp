//There are n rings RGB, they are distributed across 10 rods labelled 0 to 9. 
//you are given a sting of rings of size 2n that discribes the rings placed in a rod
//Leetcode 2103
#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
int main(){
    string s="R0G0G1R1B2B1R2G3B2G2";
    unordered_map <char,set<char>> m;
    int i=0,j=1;

    while(j<s.length()){
        m[s[j]].insert(s[i]);
        i+=2;
        j+=2;
    }

    int count=0;

    for(auto i:m){
        if(i.second.size()==3){
            count++;
        }
    }
    cout<<count;
}