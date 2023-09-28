//Use inline fuction to return the SA and Vol. of cylinder using only one function
#include <iostream>
using namespace std;
struct sav{
        int area;
        int volume;
    };
static inline struct sav SAV(int r,int h){
    struct sav s1;
    s1.area = 2*3.14*r*h;
    s1.volume=3.14*r*r*h;
    return s1;
};
int main(){
    struct sav s2 = SAV(3,6);
    cout<<s2.area<<endl;
    cout<<s2.volume<<endl;
}