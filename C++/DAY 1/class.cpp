
#include <iostream>
#include <string>
using namespace std;

//Create a car class with some attributes

class Car {
    public:

        string brand;
        string model;
        string color;
        int year;


};

// constructor- initialize the attributes with default parameters
    Car(){
        brand ='';
        model ='';
        color = '';
        year = 0 ;
    }

// Constructor with parameters
    Car ( string x,string t,string y,int w){
        brand = x;
        model = t;
        color = y;
        year = w;
    }




// Create an object of a class
int main(){
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.color = "RED";
    carObj1.year = 2020;

// Creat another object of a class

    Car carUsa;
    carUsa.brand = "Ford";
    carUsa.model = "Mustang";
    carUsa.color = "Grey";
    carUsa.year = 2017;

// print atrribute values

cout << carObj1.brand<< "" << carObj1.model << "" << carObj1.color << "" << carObj1.year << "\n";
cout << carUsa.brand << "" << carUsa.model << "" << carUsa.color << "" << carUsa.year << "\n";
return 0;

}

