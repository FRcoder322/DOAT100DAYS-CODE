/*# include <iostream>
using namespace std;

int main (){
    
    printf("Hey , There \n" );
}
*/

/*# include <iostream>
using namespace std;
int main(){
    
    char c1,c2,c3,c4,c5;
    cout << "Enter 5 letters : ";
    cin >> c1>>c2 >> c3>> c4 >> c5;
    cout << "ACSII Message : " << int(c1) << "" << int (c2)
    << "" << int (c3) << "" << int (4) << " " << int(c5);
}*/


# include <iostream>
#include <iomanip>
using namespace std;

class Product {
    public:
    int productId;
    string productName;
    int  quantity;
    float price;

// constructor initiate product

Product(int pI,string pN,int q,float pr){
    productId = pI;
    productName= pN;
    quantity= q;
    price =pr;

};
// method 

double calculateTotal (){
    return price*quantity;
}
// Method to display 
void display () {
    cout << "product: "  << productName << endl;
    cout << "price :" << price << endl;
    cout << " quantity: " << quantity << endl;
    cout << "Total : "  <<  fixed << setprecision(2) << calculateTotal () << endl;
    
}
};
int main (){
    Product Accessories( 20,"Laptop",50,70000.00);
    Accessories.display();
    return 0;
}