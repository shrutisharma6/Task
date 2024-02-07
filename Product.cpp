#include <bits/stdc++.h>
#include "product.h"
using namespace std;

Product::Product(int id, string name, float price, int quantity)
{
    product_id = id;
    product_name = name;
    unit_price = price;
    stock = quantity;
}
void Product::displayDetails() 
{
    cout << "Product ID: " << product_id << endl;
    cout << "Product Name: " << product_name << endl;
    cout << "Unit Price: Rs." << unit_price << endl;
    cout << "Quantity in Stock: " << stock << endl;
}
void Product::updateDetails(int id, string name, float price, int quantity)
{
    product_id = id;
    product_name = name;
    unit_price = price;
    stock = quantity;
}
int Product::getProductId() 
{
    return product_id;
}
string Product::getProductName() 
{
    return product_name;
}

float Product::getUnitPrice() 
{
    return unit_price;
}

int Product::getStock() 
{
    return stock;
}
void Product::setProductName(string name){
    product_name = name;
}
void Product::setProductPrice(float price){
    unit_price = price;
}
void Product::setProductStock(int quantity){
    stock = quantity;
}
