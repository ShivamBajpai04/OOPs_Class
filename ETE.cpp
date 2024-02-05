#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

int evalPrefix(string equation){
    stack<char> s;
    for(int i=equation.length();i>=0;i--){
        if(isspace(equation[i])){
            continue;
        }
        if(isdigit(equation[i])){
            s.push(equation[i]-'0');
        }
        if(equation[i]=='+'){
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            s.push(op1+op2);
        }
        if(equation[i]=='-'){
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            s.push(op1-op2);
        }
        if(equation[i]=='*'){
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            s.push(op1*op2);
        }
        if(equation[i]=='/'){
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            s.push(op1/op2);
        }
    }
    return s.top();
}

int evalPostfix(string equation){
    stack<char> s;
    for(int i=0;i<equation.length();i++){
        if(isspace(equation[i])){
            continue;
        }
        if(isdigit(equation[i])){
            s.push(equation[i]-'0');
        }
        if(equation[i]=='+'){
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            s.push(op1+op2);
        }
        if(equation[i]=='-'){
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            s.push(op2-op1);
        }
        if(equation[i]=='*'){
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            s.push(op1*op2);
        }
        if(equation[i]=='/'){
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            s.push(op2/op1);
        }
    }
    return s.top();
}

int main(){
    string s="+2/36";
    cout<<evalPrefix(s)<<endl;
    reverse(s.begin(),s.end());
    cout<<evalPostfix(s);
}