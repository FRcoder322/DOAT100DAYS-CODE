//program to calculate volime and get diment=sion of a cuboid

# include <iostream>
using namespace std;
const static float PI= 3.142;

// class 
class Cuboid{
    private:
    double length;
    double  width;
    double height;

// constructor
Cuboid(){
    lenght = '';
    width = '';
    height = '',
}

void getDimension(){
    cout<< "length:" << length<< "\n";
    cout << "width:" << width << "\n";
    cout << "height:" << height << "\n";
  
}
double calVolume(){
    return length * width *height;
}
};

int main() {
   double length,width,height;
   cout<< "Enter length :" ;
   cin >>length;
   cout << " Enter width:" ;
   cin>> width;
   cout << "Enter heigth:";
   cin >> height;

   Cuboid cuboid(length,width,height);

   Cuboid.getDimension();
   Cuboid.calVomume();
    cout << " "  << Cuboid.getDimension () << "\n";
    cout << " "  << Cuboid.calVolume() << "\n";
    return 0;
}



class Cylinder{
    private:
    int height ;
    int radius;


}






