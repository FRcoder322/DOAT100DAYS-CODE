// Calculate the Area of a rectangle

#include <iostream>
using namespace std;
class Rectangle{
    public: int length;
    private:int width;
    public :void get (){
        cout<<"Enter length"<<endl;
        cin>>length;
        cout<<"Enter width"<<endl;
        cin>>width;
        cout<<"Area"<<multiply(length,width)<<endl;

    }
    public:int multiply(int l,int W){
        return (L*W);
    }
};
int main(int argc, const char** argv) {
    Rectangle R
    R.get();
    return 0;
}

// Create a simple calculator
#include <iostream>
using namespace std;
int main() {
int x,y;
int sum;
std::cout << "Type a number" << std::endl;
cin>> x;
std::cout << "Type another number" << std::endl;
cin>>y;
sum=x+Y;
std::cout << "sum" << sum;
}