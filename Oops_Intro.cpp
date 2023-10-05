#include <iostream>
using namespace std;
//Given a list of students with name,roll number and subject marks,find average of marks.

class Subject{
    public:
        int marks;
};

class Student{
    public:
        string name;
        int Rno;
        Subject oops,CN,DBMS;
        void print(){
            cout<<name<<" "<<Rno<<" "<<oops.marks<<" "<<CN.marks<<" "<<DBMS.marks<<endl;
        }

        int average(int a,int b,int c){
            return (a+b+c)/3;
        }
};

//employees

class Employees{
    public:
        string name;
    private:
        unsigned int salary;
    public:

        void setsal(int amount){
            salary=amount;
        }

        void raise(){
            if(salary<20000){
                salary+=(salary)/5;
            }
            else if(salary<30000){
                salary+=(salary/100)*15;
            }
            else if(salary>=30000){
                salary+=(salary/100)*30;
            }
        }

        int getsal(){
            return salary;
        }

        void display(){
            cout<<getsal()<<" "<<name;
        }
};

int main(){
    //q1 driver
    
    int n;
    cin>>n;
    Student arr[n];

    //input
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].Rno>>arr[i].oops.marks>>arr[i].CN.marks>>arr[i].DBMS.marks;
    }

    //average
    for(int i=0;i<n;i++){
        cout<<arr[i].average(arr[i].oops.marks,arr[i].CN.marks,arr[i].DBMS.marks)<<endl;
    }

    //q2 driver    

    Employees e1;
    int amt;
    cin>>e1.name>>amt;
    e1.setsal(amt);
    e1.raise();
    e1.display();
}
    
