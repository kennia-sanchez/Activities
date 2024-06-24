#include <iostream>
using namespace std;

class Cine
{
    private:
    bool bReservacion;
    string sNombre;

    public:
    Cine();
    Cine(bool,string);
    void toString();
    void setReservacion(bool, string);
    bool getReservacion();
};

Cine::Cine(bool bReservacion, string sNombre)
{
    this -> bReservacion = bReservacion;
    this -> sNombre = sNombre;
}

Cine::Cine()
{
    bReservacion = false;
    sNombre = "No Reservado";
}

void Cine::toString()
{
    if(bReservacion == true)
    {
        cout << "Asiento Reservado" << endl;
        cout << "Nombre: " << sNombre << endl;
    }
    else
    {
        cout << "No Reservado" << endl;
    }
    
}

void Cine::setReservacion(bool bReservacion, string sNombre)
{
    this -> bReservacion = bReservacion;
    this -> sNombre = sNombre;
}

bool Cine::getReservacion()
{
    return bReservacion;
}
