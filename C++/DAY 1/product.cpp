
// program to receive product code & description & price
#include <iostream>
using namespace std;

class Product {
    public:
    int productCode;
    string productName;
    float price;

    // construcot to initiate product

    Product(int pC,string pN,float pr){
        productCode = pC;
        productName = pN;
        price = pr;

    }

    // method

    void display (){
        cout << "productCode :" << productCode << endl;
        cout << "Name: " << productName << endl;
        cout << " price: " << price << endl;
    }
} ;

int main (){
    // create objects of a class to be displayed
    Product item1 ( 1,"Soap",50);
    Product item2 (2,"Sugar", 70);
    Product item3 (4,"Milk",90);

    cout << "item1" << endl;
    item1.display();
    cout << "\n item2" << endl;
    item2.display();
    cout << "\n item3" << endl;
    item3.display();

    return 0;


    
}

