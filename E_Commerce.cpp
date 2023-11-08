#include <iostream>
#include <vector>
using namespace std;

class Product{
    int id;
    string name;
    int price;
    int quantity;
    public:
        Product(int id,string name,int price,int quantity){
            this->id=id;
            this->name=name;
            this->price=price;
            this->quantity=quantity;
        }
        int get_id(){
            return id;
        }
        string get_name(){
            return name;
        }
        int get_price(){
            return price;
        }
        int get_quantity(){
            return quantity;
        }
        void set_id(int id){
            this->id=id;
        }
        void set_name(string name){
            this->name=name;
        }
        void set_price(int price){
            this->price=price;
        }
        void set_quantity(int quantity){
            this->quantity=quantity;
        }
};
class Adimn{
    string username;
    string password;
    public:
        Adimn(string username,string password){
            this->username=username;
            this->password=password;
        }
        string get_username(){
            return username;
        }
        string get_password(){
            return password;
        }
        void set_username(string username){
            this->username=username;
        }
        void set_password(string password){
            this->password=password;
        }
};

class Costumer{
    int id;
    string name;
    string address;
    int phone;
    public:
        Costumer(int id,string name,string address,int phone){
            this->id=id;
            this->name=name;
            this->address=address;
            this->phone=phone;
        }
        int get_id(){
            return id;
        }
        string get_name(){
            return name;
        }
        string get_address(){
            return address;
        }
        int get_phone(){
            return phone;
        }
        void set_id(int id){
            this->id=id;
        }
        void set_name(string name){
            this->name=name;
        }
        void set_address(string address){
            this->address=address;
        }
        void set_phone(int phone){
            this->phone=phone;
        }
};

class Order{
    int id;
    int costumer_id;
    int product_id;
    int quantity;
    public:
        Order(int id,int costumer_id,int product_id,int quantity){
            this->id=id;
            this->costumer_id=costumer_id;
            this->product_id=product_id;
            this->quantity=quantity;
        }
        int get_id(){
            return id;
        }
        int get_costumer_id(){
            return costumer_id;
        }
        int get_product_id(){
            return product_id;
        }
        int get_quantity(){
            return quantity;
        }
        void set_id(int id){
            this->id=id;
        }
        void set_costumer_id(int costumer_id){
            this->costumer_id=costumer_id;
        }
        void set_product_id(int product_id){
            this->product_id=product_id;
        }
        void set_quantity(int quantity){
            this->quantity=quantity;
        }
};

class Cart{
    vector<Order> orders;
    public:
        void add_order(Order order){
            orders.push_back(order);
        }
        void remove_order(int index){
            orders.erase(orders.begin()+index);
        }
        void print(){
            for(int i=0;i<orders.size();i++){
                cout<<orders[i].get_id()<<" "<<orders[i].get_costumer_id()<<" "<<orders[i].get_product_id()<<" "<<orders[i].get_quantity()<<endl;
            }
        }
        int size(){
            return orders.size();
        }
        Order get_order(int index){
            return orders[index];
        }
};

class Inventory{
    vector<Product> products;
    public:
        void add_product(Product product){
            products.push_back(product);
        }
        void remove_product(int index){
            products.erase(products.begin()+index);
        }
        void print(){
            for(int i=0;i<products.size();i++){
                cout<<products[i].get_id()<<" "<<products[i].get_name()<<" "<<products[i].get_price()<<" "<<products[i].get_quantity()<<endl;
            }
        }
        int size(){
            return products.size();
        }
        Product get_product(int index){
            return products[index];
        }
};

class Store{
    vector<Costumer> costumers;
    public:
        void add_costumer(Costumer costumer){
            costumers.push_back(costumer);
        }
        void remove_costumer(int index){
            costumers.erase(costumers.begin()+index);
        }
        void print(){
            for(int i=0;i<costumers.size();i++){
                cout<<costumers[i].get_id()<<" "<<costumers[i].get_name()<<" "<<costumers[i].get_address()<<" "<<costumers[i].get_phone()<<endl;
            }
        }
        int size(){
            return costumers.size();
        }
        Costumer get_costumer(int index){
            return costumers[index];
        }
};

int main(){
    Store store;
    Inventory inventory;
    Cart cart;
    Adimn adimn("admin","admin");
    int id=0;
    while(true){
        cout<<"1. Admin"<<endl;
        cout<<"2. Costumer"<<endl;
        cout<<"3. Exit"<<endl;
        int choice;
        cin>>choice;
        if(choice==1){
            cout<<"Enter username: ";
            string username;
            cin>>username;
            cout<<"Enter password: ";
            string password;
            cin>>password;
            if(username==adimn.get_username() && password==adimn.get_password()){
                while(true){
                    cout<<"1. Add product"<<endl;
                    cout<<"2. Remove product"<<endl;
                    cout<<"3. Add costumer"<<endl;
                    cout<<"4. Remove costumer"<<endl;
                    cout<<"5. Print inventory"<<endl;
                    cout<<"6. Print costumers"<<endl;
                    cout<<"7. Exit"<<endl;
                    int choice;
                    cin>>choice;
                    if(choice==1){
                        cout<<"Enter name: ";
                        string name;
                        cin>>name;
                        cout<<"Enter price: ";
                        int price;
                        cin>>price;
                        cout<<"Enter quantity: ";
                        int quantity;
                        cin>>quantity;
                        Product product(id,name,price,quantity);
                        inventory.add_product(product);
                        id++;
                    }
                    else if(choice==2){
                        cout<<"Enter index: ";
                        int index;
                        cin>>index;
                        inventory.remove_product(index);
                    }
                    else if(choice==3){
                        cout<<"Enter name: ";
                        string name;
                        cin>>name;
                        cout<<"Enter address: ";
                        string address;
                        cin>>address;
                        cout<<"Enter phone: ";
                        int phone;
                        cin>>phone;
                        Costumer costumer(id,name,address,phone);
                        store.add_costumer(costumer);
                        id++;
                    }
                    else if(choice==4){
                        cout<<"Enter index: ";
                        int index;
                        cin>>index;
                        store.remove_costumer(index);
                    }
                    else if(choice==5){
                        inventory.print();
                    }
                    else if(choice==6){
                        store.print();
                    }
                    else if(choice==7){
                        break;
                    }
                }
            }
            else{
                cout<<"Wrong username or password"<<endl;
            }
        }
        else if(choice==2){
            cout<<"Enter name: ";
            string name;
            cin>>name;
            cout<<"Enter address: ";
            string address;
            cin>>address;
            cout<<"Enter phone: ";
            int phone;
            cin>>phone;
            Costumer costumer(id,name,address,phone);
            if(store.get_costumer(id).get_id()==id){
                cout<<"Costumer already exists"<<endl;
            }
            else{
                store.add_costumer(costumer);
            }
            id++;
            while(true){
                cout<<"1. Add to cart"<<endl;
                cout<<"2. Remove from cart"<<endl;
                cout<<"3. Print cart"<<endl;
                cout<<"4. Checkout"<<endl;
                cout<<"5. Exit"<<endl;
                int choice;
                cin>>choice;
                if(choice==1){
                    cout<<"Enter product id: ";
                    int product_id;
                    cin>>product_id;
                    cout<<"Enter quantity: ";
                    int quantity;
                    cin>>quantity;
                    Order order(id,costumer.get_id(),product_id,quantity);
                    cart.add_order(order);
                    id++;
                }
                else if(choice==2){
                    cout<<"Enter index: ";
                    int index;
                    cin>>index;
                    cart.remove_order(index);
                }
                else if(choice==3){
                    cart.print();
                }
                else if(choice==4){
                    int total=0;
                    for(int i=0;i<cart.size();i++){
                        total+=inventory.get_product(cart.get_order(i).get_product_id()).get_price()*cart.get_order(i).get_quantity();
                    }
                    cout<<"Total: "<<total<<endl;
                    cout<<"1. Confirm"<<endl;
                    cout<<"2. Cancel"<<endl;
                    int choice;
                    cin>>choice;
                    if(choice==1){
                        for(int i=0;i<cart.size();i++){
                            inventory.get_product(cart.get_order(i).get_product_id()).set_quantity(inventory.get_product(cart.get_order(i).get_product_id()).get_quantity()-cart.get_order(i).get_quantity());
                        }
                        cart.print();
                        cart.~Cart();
                    }
                    else if(choice==2){
                        cart.print();
                        cart.~Cart();
                    }
                }
                else if(choice==5){
                    break;
                }
            }
        }
        else if(choice==3){
            break;
        }
    }
}