#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    while(x>0 && y>0){
        if(x==0||y==0){
            break;
        }
        if(x>y){
            x-=y;
        }
        else if(y>x){
            y-=x;
        }
        else{
            break;
        }
    }
    cout<<x<<" "<<y<<" "<<x+y;
}