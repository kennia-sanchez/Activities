#include <iostream>
#include "Rectangle.h"
using namespace std;

int main ()
{
    double dW, dH, dArea;
    string sColor;

    cin>> dW >> dH >> sColor;

    Rectangle rectangle1;
    Rectangle rectangle2 (dW, dH, sColor);

    cout<< rectangle1.area() << endl;
    dArea = rectangle2.area();
}
