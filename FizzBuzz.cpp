#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i = 1;i<=num;i++){
        if(i%3==0 && i%5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%5==0){
            cout<<"Buzz"<<endl;
        }
        else if(i%3==0){
            cout<<"Fizz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}