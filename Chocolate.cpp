#include <iostream>
using namespace std;
/*
This program takes two integers as input and performs a chocolate division operation on them.
It repeatedly subtracts the smaller number from the larger number until one of them becomes zero.
The program then outputs the remaining values of both numbers and their sum.
*/
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