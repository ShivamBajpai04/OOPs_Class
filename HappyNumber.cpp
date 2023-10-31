#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=i;i<s.length()/2;i++){
        for(int j=0;j<s.length();j++){
            long long int k = stoll(s.substr(j,i));
            int l = stoi(s.substr(j+i,i+1));
            int m = stoi(s.substr(j+i,i+2));
            if (l-k==1){
                continue;
            }
            else if(m-k==1){
                continue;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}