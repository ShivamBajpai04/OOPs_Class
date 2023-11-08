#include <iostream>
using namespace std;


class Vector{
    int max_size;
    int* arr;
    int i;
    public:
        Vector(){
            arr=new int[1];
            max_size=1;
            i=0;
        }
        Vector(int s){
            arr=new int[s];
            max_size=s;
            i=0;
        }
        Vector(int s,int fill){
            arr=new int[s];
            max_size=s;
            i=0;
            for(int j=0;j<s;j++){
                arr[j]=fill;
            }
        }
        void append(int elem){
            if (i == max_size){
                int* temp = new int[2 * max_size];

                for (int i = 0; i < max_size; i++) {
                    temp[i] = arr[i];
                }
                delete[] arr;
                max_size *= 2;
                arr = temp;
            }

            arr[i]=elem;
            i++;
        }
        void pop(){
            i--;
        }
        void print(){
            for(int j=0;j<i;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
        void remove(int index){
            for(int j=index;j<i;j++){
                arr[j]=arr[j+1];
            }
            i--;
        }
        int size(){
            return i;
        }
        int capacity(){
            return max_size;
        }

};

int main(){
    int n;
    cin>>n;
    Vector v;
    Vector v1(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.append(x);
        v1.append(x);
    }
    cout<<v1.capacity()<<endl;
    v1.append(99);
    cout<<v1.capacity()<<endl;
    v.print();
    v1.print();
}