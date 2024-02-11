#include "Product.h"
#include <bits/stdc++.h>
using namespace std;

class FileHandler {
    public:
        FileHandler(){}
        void setProductsInFile(Product product);
        void getProductsFromFile();
        void updateProductsInFile(vector<Product>products);
};