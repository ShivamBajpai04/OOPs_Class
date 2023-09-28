#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void count_odd(int n,int m,int arr[n][m]){
    int odd_count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]%2==1){
                odd_count+=1;
            }
        }
    }
    cout<<"Odd count = "<<odd_count<<endl;
}

void resolve_query(int n,int m,int q,int arr[n][m],int queries[][2]){
    for(int i=0;i<q;i++){
        if(queries[i][0]==0){
            for(int j=0;j<m;j++){
                arr[queries[i][1]][j]+=1;
            }
        }
        else{
            for(int j=0;j<n;j++){
                arr[j][queries[i][1]]+=1;
            }
        }
    }
}

void get_query(int q,int queries[][2]){
    for(int i=0;i<q;i++){
        cin>>queries[i][0]>>queries[i][1];
    }
}

void init_array(int n,int m,int arr[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=0;
        }
    }
}
int main(){
    int n,m,q;
    cin>>n>>m;
    int arr[n][m];
    init_array(n,m,arr);
    cin>>q;
    int queries[q][2];
    get_query(q,queries);
    resolve_query(n,m,q,arr,queries);
    count_odd(n,m,arr);
}