#include<iostream>
using namespace std;
#include <vector>
#include <map>

//cart,user,admin,stores,inventory,products,payment/checkout
//admin aur user create krne ke functions
//users aur admins ka database
//1 admin muoltiple stores


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

class Inventory{

    vector <pair<Product,int>> sp;
    public:

    void add(Product p, int q){
        sp.push_back(make_pair(p,q));
    }

    void del(Product p){
        for(auto i=sp.begin();i!=sp.end();i++){
            if(i->first==p){
                sp.erase(i);
                break;
            }
        }
    }
    vector <pair<Product,int>> get_sp(){
        return sp;
    }
    void display(){
        for(auto i=sp.begin();i!=sp.end();i++){
            cout<<i->first.get_id()<<" "<<i->first.get_name()<<" "<<i->first.get_price()<<" "<<i->second<<endl;
        }
    }

};

class Cart:public Inventory{
    vector <pair<Product,int>> sp;
    public:
    int total_price(){
        int sum=0;
        for(auto i=sp.begin();i!=sp.end();i++){
            sum+=i->first.get_price()*i->second;
        }
        return sum;
    }
};

class User{
    string name;
    int u_id;
    Cart c;
    public:
    User(string n){
        name=n;
    }
    void add_to_cart(Product p,int q){
        c.add(p,q);
    }
    void del_from_cart(Product p){
        c.del(p);
    }
    void display_cart(){
        c.display();
    }
    int total_price(){
        return c.total_price();
    }
    void checkout(){
        cout<<"Total price is "<<total_price()<<endl;
    }

};



class Store{
    int s_id;
    Inventory i;
    public:
    void add_to_inventory(Product p,int q){
        i.add(p,q);
    }
    void del_from_inventory(Product p){
        i.del(p);
    }
    void display_inventory(){
        i.display();
    }
    int get_id(){
        return s_id;
    }
    Inventory get_inventory(){
        return i;
    }

};

class Admin{
    int a_id;
    Store s;
    int pwd;
    public:
    Admin(int id,int p){
        a_id=id;
        pwd=p;
    }

    int get_id(){
        return a_id;
    }
    Store get_store(){
        return s;
    }
    void display_inventory(){
        s.display_inventory();
    }
    void add_to_store(Product p,int q){
        s.add_to_inventory(p,q);
    }
    void del_from_store(Product p){
        s.del_from_inventory(p);
    }

};

void run_Admin_console(Admin a,int s_id){
    if(a.get_store().get_id()!=s_id){
        cout<<"Invalid admin id\n";
        return;
    }
    int ch;
    cout<<"1. Add to store\n2. Delete from store\n3. Display inventory\n4. Exit\n";
    cin>>ch;
    while(ch!=4){
        switch(ch){
            case 1:{
                int id,price,qty;
                string name;
                cout<<"Enter id, name, price, quantity\n";
                cin>>id>>name>>price>>qty;
                Product p(id,name,price);
                a.add_to_store(p,qty);
                break;
            }
            case 2:{
                int id;
                cout<<"Enter id\n";
                cin>>id;
                Product p(id,"",0);
                a.del_from_store(p);
                break;
            }
            case 3:{
                a.display_inventory();
                break;
            }
            default:{
                cout<<"Invalid choice\n";
            }
        }
        cout<<"1. Add to store\n2. Delete from store\n3. Display inventory\n4. Exit\n";
        cin>>ch;
    }

}

void run_User_console(User u,Admin a){
    int ch;
    cout<<"1. Add to cart\n2. Delete from cart\n3. Display cart\n4. Checkout\n5. Exit\n";
    cin>>ch;
    while(ch!=5){
        switch(ch){
            case 1:{
                int id,qty;
                cout<<"Enter id, quantity\n";
                cin>>id>>qty;
                vector <pair<Product,int>> li=a.get_store().get_inventory().get_sp();
                bool found=false;
                for(int i=0;i<li.size();i++){
                    if(li[i].first.get_id()==id){
                        if(li[i].second<qty){
                            cout<<"Not enough quantity\n";
                            break;
                        }
                        u.add_to_cart(li[i].first,qty);

                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Invalid id\n";
                }
            }
            case 2:{
                int id;
                cout<<"Enter id\n";
                cin>>id;
                vector <pair<Product,int>> li=a.get_store().get_inventory().get_sp();
                bool found=false;
                for(int i=0;i<li.size();i++){
                    if(li[i].first.get_id()==id){
                        u.del_from_cart(li[i].first);
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Invalid id\n";
                }
                break;
            }


int main(){
    Product p1(1,"p1",100);

    
    
}