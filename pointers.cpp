#include<iostream>
using namespace std;
int main(){
    //////////////////////
    int a=5;
    int *x=&a;
    cout<<&x<<" "<<x<<endl;
    cout<<sizeof(x)<<endl;
    //////////////////////
    int arr[]={1,2,3,4,5};
    for(int i=4;i>=0;i--){
        cout<<*(arr+i)<<" ";
    }
    //////////////////////
    for(int i=0;i<5;i++){
        int temp=*(arr+4-i);
        *(arr+4-i)=*(arr+i);
        *(arr+i)=temp;

    }
    /////////////////////
    int b=5;
    int *y=&b;
    int **z=&y;
    /////////////////////
}