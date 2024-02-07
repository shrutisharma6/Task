#ifndef PRODUCT_H
#define PRODUCT_H

#include <bits/stdc++.h>
#include <string>
using namespace std;
class Product {
    private:
        int product_id;
        float unit_price;
        int stock;
        string product_name;
    public: 
        Product(int id, string name, float price, int quantity);
        void displayDetails();
        void updateDetails(int id, string name, float price, int quantity);
        int getProductId(); 
        string getProductName();
        float getUnitPrice();
        int getStock();
        void setProductName(string name);
        void setProductPrice(float price);
        void setProductStock(int quantity);

};
#endif 