#include <iostream>
using namespace std;

const static float PI = 3.142;

class Cylinder {
protected:
    float height;
private:
    float radius;

public:
    void getdim() {
        cout << "Enter height:\n";
        cin >> height;
        cout << "Enter radius:\n";
        cin >> radius;
        cout << "The volume of the cylinder is: " << multiply(PI, radius, height) << "\n";  
    }

    float multiply(float PI, float r, float h) {
        return PI * r * r * h;  // Calculate and return the volume
    }
};

int main() {
    Cylinder c;
    c.getdim();  // Call getdim to input values and calculate the volume
    return 0;
}