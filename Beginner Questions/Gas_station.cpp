//n gas station in a circular path, each station has gas[i] amount of gas
//you have a car with an unlimited gas tank, it costs cost[i] of gas to travel from station i to its next station (i+1)
//you begin the journey with an empty tank at one of the gas stations
//return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1
//if there exists a solution, it is guaranteed to be unique
//Leetcode 134
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>gas= {1,2,3,4,6};
    vector<int>cost={3,4,5,1,2};
    int fuel=0;
    int start;
    for(int i=0;i<gas.size();i++){
        if(gas[i]-cost[i]>=0){ 
            start=i;
            break;
        }
    }
    for(int j=start;j<start+gas.size();j++){
        fuel+=gas[j%gas.size()]-cost[j%gas.size()];
        if(fuel<0){
            break;
        }
        if(j%gas.size()==start-1){
            cout<<start;
            return 0;
        }
    }


    cout<<-1;


}