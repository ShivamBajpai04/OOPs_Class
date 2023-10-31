#include <iostream>
using namespace std;

class Subject{
    string name;
    int marks;
    public:
        void set_marks(int m){
            marks=m;
        }

        int get_marks(){
            return marks;
        }
        void set_name(string n){
            name=n;
        }
        string get_name(){
            return name;
        }
};

class Student{
    int roll_no;
    string name;
    Subject subject[3];
    public:
        void set_marks(int m1,int m2,int m3){
            subject[0].set_marks(m1);
            subject[1].set_marks(m2);
            subject[2].set_marks(m3);
        }

        int get_marks(){
            return subject[0].get_marks()+subject[1].get_marks()+subject[2].get_marks();
        }

        void set_name(string n){
            name=n;
        }

        string get_name(){
            return name;
        }
};

class LeaderBoard{//top 5 students
    Student s[100];
    int count=0;
    void print_students(){
            for(int i=0;i<5;i++){
                cout<<i+1<<" "<<s[i].get_name()<<" "<<s[i].get_marks()<<endl;
            }
        }
        void sort_students(){
            for (int i = count-1; i >= 0; i--) 
                for (int j = count-1; j > count-2 - i; j--) 
                    if(s[j].get_marks()<s[j+1].get_marks()){
                            swap(s[j+1],s[j]);
                        }
        }
    public:
        void add_student(Student st){
            s[count++]=st;
        }

        void Board(){
            sort_students();
            print_students();
        }
};

int main(){
    Student s1,s2,s3,s4,s5,s6;
    s1.set_name("A");
    s2.set_name("B");
    s3.set_name("C");
    s4.set_name("D");
    s5.set_name("E");
    s6.set_name("F");
    s1.set_marks(10,20,30);
    s2.set_marks(20,30,40);
    s3.set_marks(30,40,50);
    s4.set_marks(40,50,60);
    s5.set_marks(50,60,70);
    s6.set_marks(60,70,80);
    LeaderBoard l;
    l.add_student(s1);
    l.add_student(s2);
    l.add_student(s3);
    l.add_student(s4);
    l.add_student(s5);
    l.add_student(s6);
    l.Board();
    
}