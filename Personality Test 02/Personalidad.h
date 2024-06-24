#include <iostream>
using namespace std;


class Personalidad{
    private: 
        int suma;
    public:
        Personalidad(int, int, int, int, int, int, int, int, int, int);
        void setPersona(int, int, int, int, int, int, int, int, int, int);
        int getSuma();

};

Personalidad::Personalidad(int resp1, int resp2, int resp3, int resp4, int resp5, int resp6, int resp7, int resp8, int resp9, int resp10){
    suma = resp1 + resp2 + resp3 + resp4 + resp5 + resp6 + resp7 + resp8 + resp9 + resp10;
}

void Personalidad::setPersona(int resp1, int resp2, int resp3, int resp4, int resp5, int resp6, int resp7, int resp8, int resp9, int resp10){
    suma = resp1 + resp2 + resp3 + resp4 + resp5 + resp6 + resp7 + resp8 + resp9 + resp10;
}



int Personalidad::getSuma(){
    return suma;
}