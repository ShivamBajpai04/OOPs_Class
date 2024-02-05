#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>>v(n,vector<int> (n,0));
    int right=n-1, left=0, top=0, bottom=n-1,i=1,dir=0;
    while(right>=left && bottom>=top){
        
        if(dir==0){
            for(int j=left;j<=right;j++){
                v[top][j]+=i;
                i++;
            }
            top++;
        }

        if(dir==1){
            for(int j=top;j<=bottom;j++){
                v[j][right]=i;
                i++;
            }
            right--;
        }

        if(dir==2){
            for(int j=right;j>=left;j--){
                v[bottom][j]=i;
                i++;
            }
            bottom--;
        }
        if(dir==3){
            for(int j=bottom;j>=top;j--){
                v[j][left]=i;
                i++;
            }
            left++;
        }
        dir=(dir+1)%4;
    }
    return v;
}

void print(vector<vector<int>>v,int n){
    cout<<"{";
    for(int i=0;i<n;i++){
        cout<<"{";
        for(int j=0;j<n;j++){
            if(j!=n-1){    
                cout<<v[i][j]<<", ";
            }
            else{
                cout<<v[i][j];
            }
        }
        if(i!=n-1){
            cout<<"}, ";
        }
        else{
            cout<<"}";
        }
    }
    cout<<"}";
}

int main(){
    int n=4;
    auto v=generateMatrix(n);
    print(v,n);
}