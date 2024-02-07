#include "inventory.h"
#include "Logger.cpp"

void Inventory::addProduct(  Product& product) {
    products.push_back(product);
    Logger lobj("Product added to inventory");
}
void Inventory::updateProduct(int productId,string name, float price, int quantity) {
    for(auto& product : products) {
        if(product.getProductId() ==productId) {
            product.setProductName(name);
            product.setProductPrice(price);
            product.setProductStock(quantity);
            Logger lobj("Product details updated");
            break;
        }
    }
}
void Inventory::displayInventory()   {
    if (products.empty()) {
        cout<<"Inventory is empty"<<endl;
    } 
    else {
        for(auto product:products){
            product.displayDetails();
            Logger lobj("Product details fetched");
        }
    }
}
vector<Product>& Inventory::getProducts() {
    return products;
}
