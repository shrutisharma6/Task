#include "FileHandler.h"
#include <bits/stdc++.h>
using namespace std;

void FileHandler::setProductsInFile(Product product) {
    ofstream fout("product.txt", ios::app); 
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
void FileHandler::getProductsFromFile() {
    vector<Product> products;
    ifstream fin("product.txt");
    if (fin.is_open()) {
            string data;
            while (getline (fin, data)) {
            cout << data<<endl;
}
        fin.close();
    } else {
        cerr << "Error opening file." << endl;
    }
}

void FileHandler::updateProductsInFile(vector<Product>products){
    ofstream fout("product.txt");
    for(auto& product : products) {
        if (fout.is_open()) {
        fout << product.getProductId() << ","
             << product.getProductName() << ","
             << product.getUnitPrice() << ","
             << product.getStock() << endl;
    } 
    else {
        cerr << "Error opening file." << endl;
    }
    }
    fout.close();
    cout<<"Product details updated"<<endl;
}

