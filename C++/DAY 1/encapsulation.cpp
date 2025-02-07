#include<iostream>
using namespace std;

// ======================== Encapsulation ========================
// Encapsulation is a mechanism that hides sensitive data from the user.
// We use private (access specifier) to restrict access to the data.
// Getters and Setters are used to read or modify the value of private members.

class Employees {
private:
    int salary; // private variable to store salary

public:
    // Setter to modify salary
    void setsalary(int s) {
        salary = s;
    }

    // Getter to retrieve salary
    int getsalary() {
        return salary;
    }
};

// ======================== INHERITANCE ========================
// Inheritance allows one class (child class) to inherit attributes and methods from another class (parent class).
// It allows for code reusability and extension.

class Vehicle {
public:
    string brand = "Ford";  // attribute
    void honk() {           // method
        cout << "tut tut\n"; 
    }
};

// Derived class Car inherits from Vehicle class
class Car : public Vehicle {
public:
    string model = "Mustang";
    int year = 2020;
};

// ======================== Employee and Programmer Example ========================
// Base class Employee: demonstrates inheritance using protected members
class Employee {
protected:
    int salary; // protected so derived classes can access it
};

// Derived class Programmer inherits from Employee
class Programmer : public Employee {
public:
    int bonus;  // additional attribute for programmer

    // Setter for salary
    void setsalary(int s) {
        salary = s;
    }

    // Getter for salary
    int getsalary() {
        return salary;
    }
};

// ======================== Main Function ========================
int main() {
    // Example of encapsulation with Employees class
    Employees emp;
    emp.setsalary(50000); // Setting salary using setter
    cout << "Employee salary: " << emp.getsalary() << "\n"; // Getting salary using getter

    // Example of inheritance with Car class
    Car carUsa;
    carUsa.honk(); // Calling inherited honk() method from Vehicle
    cout << "Car: " << carUsa.brand + " " + carUsa.model + " " + to_string(carUsa.year) << "\n";

    // Example of Employee and Programmer inheritance
    Programmer vue;
    vue.setsalary(50000); // Setting salary
    vue.bonus = 40000;    // Setting bonus
    cout << "Programmer salary: " << vue.getsalary() << "\n";
    cout << "Programmer bonus: " << vue.bonus << "\n";

    return 0;
}