#include <iostream>
#include<string>
using namespace std;
int main(){
    string ans="";
    string s="abaaacdefg";
    int n = s.length();
    for (int i = 0; i < n; i++) {
 
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        if(count==1){
            ans+= s[i];
            continue;
        }
        ans+= s[i] + to_string(count);
    }
    cout<<ans;

}