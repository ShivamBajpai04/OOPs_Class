#include <iostream>
using namespace std;
//Given a list of students with name,roll number and marks, sort them in descending order of marks.
class Student{
    public:
        string name;
        int Rno;
        int marks;
};

int main(){
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].Rno>>arr[i].marks;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i].marks<arr[j].marks){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].marks<<endl;
    }
}