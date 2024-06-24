#include <iostream>
#include "Cine.h"
using namespace std;

int main()
{
    string sNombre;
    int iAsiento, iFila;
    int iOpcion;
    bool bReservacion;

    Cine asientos[5][5];

        while(iOpcion != 4){
        cout << "Menu" << endl;
        cout << "1 Reservar Asiento" << endl;
        cout << "2 Ver Informacion de un Asiento" << endl;
        cout << "3 Ver Asientos" << endl;
        cout << "4 Salida" << endl;
        cin >> iOpcion;

        switch (iOpcion)
        {
            case 1:
                cout << "Fila: ";
                cin >> iFila;
                cout << "Asiento: ";
                cin >> iAsiento;

                if (asientos[iFila-1][iAsiento-1].getReservacion() == false)
                {
                    bReservacion = true;
                    cout << "Nombre: " << endl;
                    cin >> sNombre;
                    asientos[iFila-1][iAsiento-1].setReservacion(bReservacion, sNombre);
                }
                else
                {
                    cout << "Reservado" << endl;
                }
            
            break;

            case 2:
                cout << "Fila: " << endl;
                cin >> iFila;
                cout << "Asiento: " << endl;
                cin >> iAsiento;
                asientos[iFila-1][iAsiento-1].toString();

            break;

            case 3:
                for(int i=0; i<=4; i++)
                {
                    for(int j=0; j<=4; j++)
                    {
                        if (asientos[i][j].getReservacion() == true)
                        {
                            cout << " * ";
                        }
                        else
                        {
                            cout << " _ ";
                        }
                        
                    }
                    cout << endl;
                }
            break;

            case 4:
                cout << "Salida" << endl;
            break;

            default:
            cout << "Opcion Incorrecta" << endl;
            break;

        }

}
    
    return 0;
}


