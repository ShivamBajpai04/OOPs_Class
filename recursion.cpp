#include<iostream>
using namespace std;

//When 0<N<32 - use recursion

//Declarations

//Mr Robert,Elliot,Richard. Given an string, the encrypted string will start with the middle character of the string and will be formed henceforth with the middle character of the left substring and the middle character of the right substring. The process continues till we get a single character as the encrypted string. Given the string, encrypt it.

string RERencrypt(string s);

//find no of ways you can make given money sum with coins given in array. use same coin multiple times

int coinWays(int n,int arr[],int amt);

//function to find number of ways to climb stairs using recursion

int stairWays(int n);

//function to find sum of array using recursion

int arrSum(int arr[],int n);

//function to find super digit of a number using recursion

int supDigit(int n);

//function to find factorial of a number using recursion

int fact(int n);

//function to find nth fibonacci number using recursion

int fibb(int n);

//driver

int main(){
    int n=5;
    int arr[]={1,2,5,10};
    cout<<coinWays(4,arr,18)<<endl;
    cout<<RERencrypt("abcdefghijk");
}


//Definitions

string RERencrypt(string s){
    if(s.length()==1 || s.length()==2){
        return s;
    }
    return s[s.length()/2]+RERencrypt(s.substr(0,s.length()/2))+RERencrypt(s.substr(s.length()/2+1,s.length()-s.length()/2));
}

int coinWays(int n, int arr[],int amt){
    if(amt==0){
        return 1;
    }
    if(amt<0){
        return 0;
    }
    int ways=0;
    for(int i=0;i<n;i++){
        ways+=coinWays(n,arr,amt-arr[i]);
    }
    return ways;
}

int stairWays(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return stairWays(n-1)+stairWays(n-2);
}

int arrSum(int arr[],int n){
    if (n<0){
        return 0;
    }
    return arr[n]+arrSum(arr,n-1);
}

int supDigit(int n){
    if(n<10){
        return n;
    }
    return supDigit(n/10+n%10);
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int fibb(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibb(n-1)+fibb(n-2);
}
