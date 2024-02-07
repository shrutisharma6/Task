#include <iostream>
#include <vector>
#include "Product.cpp"
#include "Inventory.cpp"
#include "Logger.h"
// #include "FileHandler.h"

using namespace std;

int main() {
    Inventory inv;
    int x;
    do {
        cout<<"Menu:"<<endl;
        cout<<"1.Add a new product to the inventory"<<endl;
        cout<<"2.Update details of an existing product"<<endl;
        cout<<"3.Display the current inventory"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>x;
        switch(x) {
            case 1: {
                int id, quantity;
                float price;
                string name;
                cout << "Enter product ID: ";
                cin >> id;
                cout << "Enter product name: ";
                cin >> name;
                cout << "Enter unit price: ";
                cin >> price;
                cout << "Enter quantity in stock: ";
                cin >> quantity;
                Product new_product(id, name, price, quantity);
                inv.addProduct(new_product);
                break;
            }
            case 2: {
                int id;
                cout << "Enter product ID to update: ";
                cin >> id;
                float price;
                int quantity;
                string name;
                cout << "Enter new product name: ";
                cin >> name;
                cout << "Enter new unit price: ";
                cin >> price;
                cout << "Enter new quantity in stock: ";
                cin >> quantity;
                inv.updateProduct(id, name, price, quantity);
                break;
                }
            case 3:
                inv.displayInventory();
                break;
            case 4:
                cout <<"Exiting program"<<endl;
                break;
            default:
                cout <<"Invalid choice"<<endl;
        }
    } while(x !=4);
    
    return 0;
}
