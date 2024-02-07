#include "Product.h"
// #include "inventory.h"
#include <bits/stdc++.h>
using namespace std;

class FileHandler {
    public:
        FileHandler(){}
        void setProductsInFile(Product product);
        vector<Product> getProductsFromFile();
        void displayProducts(vector<Product>& product);
};