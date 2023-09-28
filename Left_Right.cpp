#include <iostream>
using namespace std;
int main(){
    int left,right;
    cin>>left>>right;
    while(left<right){
        cout<<left<<endl;
        left*=2;
    }
}