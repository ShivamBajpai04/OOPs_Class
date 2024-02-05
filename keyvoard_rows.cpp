#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Function to find the words that can be typed using only one row of the keyboard
vector<string> keyboard(vector<string>& words){
    const string first_row = "qwertyuiopQWERTYUIOP";
    const string second_row = "asdfghjklASDFGHJKL";
    const string third_row = "zxcvbnmZXCVBNM";
    unordered_map<char,int> first,second,third;
    for(auto j : first_row){
        first[j]++;
    }
    for(auto j : second_row){
        second[j]++;
    }
    for(auto j : third_row){
        third[j]++;
    }
    vector<string>ans;
    for(auto i : words){            
        if(first.find(i[0])!=first.end()){
            bool found=true;
            for(auto j : i){
                if(first.find(j)==first.end()){
                    found=false;
                    break;
                }
            }
            if(found){
                ans.push_back(i);
            }
        }
        else if(second.find(i[0])!=second.end()){
            bool found=true;
            for(auto j : i){
                if(second.find(j)==second.end()){
                    found=false;
                    break;
                }
            }
            if(found){
                ans.push_back(i);
            };
        }
        else{
            bool found=true;
            for(auto j : i){
                if(third.find(j)==third.end()){
                    found=false;
                    break;
                }
            }
            if(found){
                ans.push_back(i);
            }
        }
    }
    return ans;
}

// Function to print the vector
void print(vector<string>& ans){
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
}

// Driver code
int main(){
    vector<string> words = {"Alaska","Dad","Sex","TYPEWRITER"};
    vector<string> ans = keyboard(words);
    print(ans);
}