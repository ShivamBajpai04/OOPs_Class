#include<iostream>
using namespace std;

//Intuition:
//first we thought how the indexes are changing in each iteration
//then we thought how to traverse each diagonal
//the main diagonal was easy but we had to extend the logic to all the smaller diagonals
//we used a variable p to keep track of the diagonal we are on
//then we thought of ways to know weather to move up or down
//we figured out that the sum of i and j governs weather to move up or down


//Logic:
//1. We will use two variables i and j to traverse the array.
//2. We will use a variable p to keep track of the diagonal we are on.
//3. We will use a variable k to traverse the diagonal.
//4. We check if the sum of i and j is even or odd. This tells us wether to move up or down the diagonal.
//5. We check if j is equal to n-i+p. This tells us the starting point of the diagonal.
//6. We traverse the diagonal using k and print the elements.
//7. We check a base condition in the inner loop to make sure we don't go out of bounds to random elements.
//8. We increment p after each diagonal traversal.
//9. We use a and b for testing the up and down diagonal traversal.


int main(){
    //input of n
    int n;
    cin>>n;
    
    //input of arr
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    //output of arr (main logic)
    int p= -n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)%2==0 && j==n-i+p){
                for(int k=0;k<=max(i,j);k++){
                    if(i+k<n && j-k>=0){    
                        cout<<arr[j-k][i+k]<<"a ";
                    }
                }
                p++;
            }
            else if((i+j)%2!=0 && j==n-i+p){
                for(int k=0;k<=max(i,j);k++){
                    if(i+k<n && j-k>=0){
                        cout<<arr[i+k][j-k]<<"b ";
                    }
                }
                p++;
            }
        }
    }
    cout<<endl;

    //Optimal code
    int N,M;
    cin>>N>>M;
    int arr1[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr1[i][j];
        }
    }
    int i=0,j=0;
    bool up=true;
    int k=0;
    while(k<N*M){
        if(up){
            while(i>=0 && j<M){
                cout<<arr1[i][j]<<"u ";
                i--;
                j++;
                k++;
            }
            if(i<0 && j<=M-1){
                i=0;
            }
            if(j==M){
                i=i+2;
                j--;
            }
        }
        else{
            while(i<N && j>=0){
                cout<<arr1[i][j]<<"d ";
                i++;
                j--;
                k++;
            }
            if(j<0 && i<=N-1){
                j=0;
            }
            if(i==N){
                j=j+2;
                i--;
            }
        }
        up=!up;
    }
}