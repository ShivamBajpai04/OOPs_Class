//Noddy has an exam in which each question has an difficulty level in the form of an int now Noddy can only solve the problems that have difficulty level or less than x
//Now the score of the student = Max No of answers he has attempted without skipping a question
//The student is allowed to skip one question that will not be counted in the continuity of the questions
//Determine the Max Score

//Update the code so that it dosent only check from beginning but finds the best possible score
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n, k;
//     cout<<"Give N ";
//     cin>>n;
//     int arr[n];
//     cout<<"Give array ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout<<"Give K ";
//     cin>>k;
//     int skip=0;
//     int count=0;
//     int ans=INT_MIN;
//     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//         if(arr[i]<=k){
//             count++;
//         }
//         if(arr[i]>k){
//             skip++;
//         }
//         if(skip>1){
//             ans=max(count,ans);
//             count=0;
//             skip=0;
//         }
//     }
//     cout<<ans;
// }

// //GPT soln

#include <iostream>
using namespace std;

int maxScore(int questions[], int n, int x) {
    int maxScore = 0;
    int currentScore = 0;
    bool skipped = false;
    
    for (int i = 0; i < n; ++i) {
        if (questions[i] <= x) {
            currentScore += 1;
        } else if (!skipped) {
            currentScore += 1;
            skipped = true;
        } else {
            maxScore = max(maxScore, currentScore);
            currentScore = 0;
        }
    }
    
    maxScore = max(maxScore, currentScore);
    return maxScore;
}

int main() {
    int questions[] = {3, 6, 3, 6, 3, 3, 3, 3}; // Test case difficulty levels
    int n = sizeof(questions) / sizeof(questions[0]); // Calculate the size of the array
    int x = 4; // Noddy's maximum ability
    cout << maxScore(questions, n, x) << endl; // Output: Maximum score Noddy can achieve
    
    return 0;
}
