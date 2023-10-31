#include <iostream>
using namespace std;

class Product{
    public:
        int prod_id;
        string prod_name;
        int prod_cost;
};

class Cart{
    public:
        Product cart[10];
        int quant[10];
        int price;
        int count=0;
        int total(){
            int sum=0;
            for(int i=0;i<count;i++){
                sum += quant[i]*cart[i].prod_cost;
            }
            price=sum;
        }
};

class User{
    
    int id;
    string User_name;
    Cart User_cart;
    public:
        void set_User_name(string n){
            User_name=n;
        }

        string get_User_name(){
            return User_name;
        }

        void add_to_cart(Product p, int quantity){
            User_cart.cart[User_cart.count++] = p;
            User_cart.quant[User_cart.count++] = quantity;
        }

        void remove_from_cart(Product p){
            for(int i=0;i<User_cart.count;i++){
                if(User_cart.cart[i].prod_id == p.prod_id){
                    swap(User_cart.cart[User_cart.count],User_cart.cart[i]);
                    swap(User_cart.quant[User_cart.count],User_cart.quant[i]);
                }
            }
        }

        void lower_to_higher(){
            for(int i=0;i<User_cart.count;i++){
                for(int j=i+1;j<User_cart.count;j++){
                    if(User_cart.cart[j].prod_cost>User_cart.cart[j+1].prod_cost){
                        swap(User_cart.cart[j+1],User_cart.cart[j]);
                        swap(User_cart.quant[j],User_cart.quant[j+1]);
                    }
                }
            }           
        }

        void higher_to_lower(){
            for(int i=0;i<User_cart.count;i++){
                for(int j=i+1;j<User_cart.count;j++){
                    if(User_cart.cart[j].prod_cost<User_cart.cart[j+1].prod_cost){
                        swap(User_cart.cart[j+1],User_cart.cart[j]);
                        swap(User_cart.quant[j],User_cart.quant[j+1]);
                    }
                }
            }
        }

        void show_cart(){
            for(int i=0;i<User_cart.count;i++){
                cout<<User_cart.cart[i].prod_name<<" "<<User_cart.quant[i]<<" "<<User_cart.cart[i].prod_cost<<endl;
            }
        }
};


int main(){
}