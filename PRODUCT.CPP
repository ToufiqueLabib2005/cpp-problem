#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string productName;
    int productID;
    float price;

public:
    Product() {
        productName = "Unnamed";
        productID = 0;
        price = 0.0;
    }
    Product(string name, int id, float p) {
        productName = name;
        productID = id;
        price = p;
    }
    void displayDetails() {
        cout << "Product Name: " << productName << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Price: " << price << endl;
    }

    ~Product() {
        cout << "Product object destroyed: " << productName << endl;
    }
};
int main() {
    Product p1;
    p1.displayDetails();

    Product p2("sound box", 101, 75000.50);
    p2.displayDetails();

    return 0;
}
