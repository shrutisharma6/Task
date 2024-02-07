#ifndef INVENTORY_H
#define INVENTORY_H
#include "Product.h"
#include "Logger.h"
#include <bits/stdc++.h>
class Inventory {
private:
    vector<Product> products;
public:
    void addProduct(Product& product);
    void updateProduct(int productId, string name, float price, int quantity);
    void displayInventory();
    vector<Product>& getProducts();
};
#endif