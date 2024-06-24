#include <iostream>
using namespace std;

class Complex
{
    private:
    int iReal, iImaginario;

    public:
    Complex (int, int);
    Default 0 + 0;

    int Real();
    int Imaginario();
    void AddComplex(int, int);
    void SubstractComplex(int, int);
    void toString();

};

Complex::Complex ()
{
    iReal = 0;
    iImaginario = 0;
}

Complex::Complex (int iR, int iI)
{
    iReal = iR;
    iImaginario = iI;
}

void Complex::tostring ()
{
    cout << iReal << " ";
    
    if (iImaginario >= 0)
    {
        cout << "+";
    }
    cout << " " << iImaginario << "i" << endl;
}

void Complex::AddComplex(int iR, int iI)
{
    iReal += iR;
    iImaginario += iI;
}

void Complex::SubstractComplex(int iR, int iI)
{
    iReal -= iR;
    iImaginario -= iI;
}