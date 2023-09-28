//structure ke object ko declare krne ke syntax ko short krne ke liye
#include <iostream>
using namespace std;
struct Student{
    char name[15];
    int RollNo;
    double Marks;
};
typedef struct Student stu;
//OR
typedef struct student{
    char name[15];
    int RollNo;
    double Marks;
}stu1;
int main(){
    stu s1;
    stu1 s2;
    cout<<sizeof(s1);
    cout<<sizeof(s2);
}