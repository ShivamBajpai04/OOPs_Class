//here char requires 3 cycles to be read, so the total memory give to the union will be 12 bytes
//max size data type se max size variable ko cover krne jitni memory allocate
//first CPU cycle ka value gaarbage collector collect kr lega aur waha pe agla data overwrite ho jaye ga
//memory optimisation
#include <iostream>
using namespace std;
union Student{
    char name[10];
    int RollNo;
};
int main(){
    union Student s1;
    cout<<sizeof(s1)<<"\n";
}