#include<iostream>
using namespace std;
#include <vector>
#include <unordered_map>

//cart,user,admin,stores,inventory,products,payment/checkout

class Product{
    int p_id;
    string name;
    int price;
    public:
    Product(int id,string n,int pr){
        p_id=id;
        name=n;
        price=pr;
    }
    bool operator==(Product p){
        return p_id==p.p_id;
    }
    //getters
    
    int get_id(){
        return p_id;
    }

    string get_name(){
        return name;
    }

    int get_price(){
        return price;
    }

};
class Cart{

    unordered_map<Product,int> sp;
    public:

    void add(Product p, int q){
        if(sp.find(p)==sp.end()){
            sp[p]=q;
        }
        else{
            sp[p]+=q;
        }
    }

    void del(Product p){
        sp.erase(p);
    }

    void display(){
        for(auto i=sp.begin();i!=sp.end();i++){
            cout<<i->first.get_name()<<" "<<i->second<<endl;
        }
    }

};

int main(){
    Product p1(10,"ok",10);
    Product p2(20,"o",10);
    Product p3(30,"k",10);
    Product p4(40,"t",10);
    Cart i;
    i.display();  
    i.add(p1,10);
    i.add(p2,10);
    i.add(p3,10);
    i.add(p4,10);
    i.del(p2);
}