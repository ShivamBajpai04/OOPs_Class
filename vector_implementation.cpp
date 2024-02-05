#include <iostream>
using namespace std;

template <typename T>

class Vector{
    int max_size;
    T* arr;
    int i;
    public:
        Vector(){
            arr=new T[1];
            max_size=1;
            i=0;
        }
        Vector(int s){
            arr=new T[s];
            max_size=s;
            i=0;
        }
        Vector(int s,T fill){
            arr=new T[s];
            max_size=s;
            i=0;
            for(int j=0;j<s;j++){
                arr[j]=fill;
                i++;
            }
        }
        void append(T elem){
            if (i == max_size){
                T* temp = new T[2 * max_size];

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
        T operator[](int index){
            return arr[index];
        }

        friend ostream& operator<<(ostream& os,Vector<T>& v);

};

template <typename T>
ostream& operator << (ostream& os,Vector<T>& v){
    for(int j=0;j<v.i;j++){
        os<<v[j];
    }
    return os;
}

int main(){
    int n=5;
    Vector <int>v;
    Vector <char>v1(n,'5');
    cout<<v.capacity()<<endl;
    cout<<v1;
}