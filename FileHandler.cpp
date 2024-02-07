#include "FileHandler.h"
#include <bits/stdc++.h>
using namespace std;

void FileHandler::setProductsInFile(Product product) {
    ofstream fout("product.txt"); 
    if (fout.is_open()) {
        fout << product.getProductId() << ","
             << product.getProductName() << ","
             << product.getUnitPrice() << ","
             << product.getStock() << endl;
        fout.close();
        cout << "Product details added to file successfully." << endl;
    } else {
        cerr << "Error opening file." << endl;
    }
}
vector<Product> FileHandler::getProductsFromFile() {
    vector<Product> products;
    ifstream fin("product.txt");
    if (fin.is_open()) {
        string line;
        while (getline(fin, line)) {
            stringstream ss(line);
            string productIdStr, productName, unitPriceStr, stockStr;
            
            getline(ss, productIdStr, ',');
            getline(ss, productName, ',');
            getline(ss, unitPriceStr, ',');
            getline(ss, stockStr);
            
            int productId = stoi(productIdStr);
            float unitPrice = stof(unitPriceStr);
            int stock = stoi(stockStr);
            
            Product product(productId, productName, unitPrice, stock);
            products.push_back(product);
        }
        fin.close();
    } else {
        cerr << "Error opening file." << endl;
    }
    return products;
}

void FileHandler::displayProducts( vector<Product>& products) {
    cout << "Products in file:" << endl;
    for (auto& product : products) {
        product.displayDetails();
        cout << endl;
    }
}
