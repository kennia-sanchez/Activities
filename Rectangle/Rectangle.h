#include <iostream>
using namespace std;

class Rectangle
{
    private:
 //Atributes
    double dWidth;
    double dHeight;
    string sColor;

    public:
 //Constructors
    Rectangle();
    Rectangle(double,double,string); 

//Method
    double area();
    double perimeter();
};

Rectangle::Rectangle()
{
    dWidth = 10;
    dHeight = 5;
    sColor= "blue";
}

Rectangle::Rectangle(double dW, double dH, string sColor)
{
    dWidth = dW;
    dHeight = dH;
    this -> sColor = sColor;
}   
    double Rectangle::area()
    {
        return dWidth * dHeight;
    }

    double Rectangle::perimeter()
    {
        return (2 * dWidth) + (2 * dHeight);
    }
 

