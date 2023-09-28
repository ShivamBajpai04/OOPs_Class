//memory allocation is contagious
//max size data type ka size will be used as cpu cycle 
//padding is added
#include <iostream>
#include <math.h>
using namespace std;
//design a struct to represent costumers and create an array of structures for nearby stores. Utilise pythagorean theorm to calculate dist and identify the closest store for costumer to place their order
struct Store{
    char name;
    int x;
    int y;
};
struct Costumer{
    int x;
    int y;
};
struct Student{
    char name[10];
    int RollNo;
    long Marks;
};

static inline int Distance(struct Store s, struct Costumer c);

int main(){
    struct Student s1;
    //cout<<sizeof(s1);
    //Costumer dist problem
    struct Store s[3]={{'A',2,8},{'B',7,9},{'C',12,19}};
    struct Costumer c={1,1};
    int minii = INT_MAX;
    for(int i=0; i < sizeof(s)/sizeof(s[0]);i++){
        //index se hum structure ko access krre hai na ki list ko
            int dist = Distance(s[i],c);
            cout<<"Your dist. from store "<<s[i].name<<" is "<<dist<<endl;
            minii = min(dist,minii);
    }
    cout<<"Min distance is "<<minii;
}

static inline int Distance(struct Store s, struct Costumer c){
    int dist = sqrt(pow((s.x-c.x),2) + pow((s.y-c.y),2));
    return dist;
}