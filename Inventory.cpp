#include "inventory.h"
#include "Logger.cpp"
#include "FileHandler.cpp"
void Inventory::addProduct( Product& product) {
    products.push_back(product);
    string temp = "Product inserted at ";
    Logger lobj(temp);
    FileHandler fobj;
    fobj.setProductsInFile(product);
}
void Inventory::updateProduct(int productId,string name, float price, int quantity) {
    for(auto& product : products) {
        if(product.getProductId() ==productId) {
            product.setProductName(name);
            product.setProductPrice(price);
            product.setProductStock(quantity);
            Logger lobj("Product details updated at ");
            break;
        }
    }
    FileHandler fobj;
    fobj.updateProductsInFile(products);

}
void Inventory::displayInventory()   {
    if (products.empty()) {
        cout<<"Inventory is empty"<<endl;
    } 
    else {
        for(auto product:products){
            product.displayDetails();
            Logger lobj("Product details fetched at");
        }
    }
}
vector<Product>& Inventory::getProducts() {
    return products;
}
