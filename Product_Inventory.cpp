#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Enum declaration
enum category {Electronics, Clothings, Books, Groceries};

// Product structure
struct Product {
    int prodID;
    double price;
    int quantity;
    string name;
    category cat;
};

void addProduct(struct Product* Inventory[], struct Product prod) {
    int i = 0;
    while (Inventory[i] != NULL) {
        i++;
    }
    cout<<"No. of products is "<<i+1<<endl;
    if (i == 100) {
        cout << "Inventory is full";
        return;
    }
    Inventory[i] = new Product(prod); // Allocate memory for the new product and copy its contents
}

void printProduct(struct Product Inventory[], int i) {
    struct Product p = Inventory[i];
    cout << "Product ID: " << p.prodID << endl;
    cout << "Price: " << p.price << endl;
    cout << "Quantity: " << p.quantity << endl;
    cout << "Name: " << p.name << endl;
    cout << "Category: " << p.cat << endl;
}

int main() {
    struct Product* Inventory[100] = { nullptr }; // Initialize the array with NULL pointers
    struct Product prod;
    prod.prodID = 1;
    prod.price = 100;
    prod.quantity = 10;
    prod.name = "Laptop";
    prod.cat = Electronics;
    addProduct(Inventory, prod);
    printProduct(*Inventory, 0); // Pass the first element of the array to the function
}
