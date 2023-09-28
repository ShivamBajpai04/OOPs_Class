#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=(n*(n+1))/2;
    int i=1;
    do{
        i++;
    }
    while(pow(2,i)<n);
    int ans=sum-pow(2,i-1);
    cout<<ans;
}