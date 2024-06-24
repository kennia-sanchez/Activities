#include <iostream>
#include "Empleado.h"
using namespace std;

int main()
{
    int iID,iDias, iOpc;
    string sN,sA,sAP,sAM,sC;
    double dS,dI,dT;
    int iOpc2, i=0;

    Empleado empleado[20];

    while (iOpc != 4)
    {
        cout << "1. Dar de Alta " << endl;
        cout << "2. Calcular Nomina " << endl;
        cout << "3. Mostrar Datos del Empleado " << endl;
        cout << "4. Salir " << endl;
        cin >> iOpc;
        cout << endl;

        switch (iOpc)
        {
            case 1: 
                while(iOpc2 != 2 && i<20)
                {
                    cout << "ID: " << endl;
                    cin >> iID;
                    cout << "Nombre: " << endl;
                    cin >> sN;
                    cout << "Apellido Paterno: " << endl;
                    cin >> sAP;
                    cout << "Apellido Materno: " << endl;
                    cin >> sAM;
                    cout << "Curp: " << endl;
                    cin >> sC;
                    cout << "Salario por Dia: " << endl;
                    cin >> dS;
                    cout << "Impuestos a Agregar: " << endl;
                    cin >> dI;

                    empleado[i].setDarDeAlta(iID,sN,sAP,sAM,sC,dS,dI);
                    i++;
                    cout << "Deseas agregar otro empleado? (1. Si  2. No) " << endl;
                    cin >> iOpc2;
                    cout << endl;
                }

                
            break;

            case 2:
                cout << "Ingrese el ID: ";
                cin >>iID;
                cout << "Cuantos dias trabajo? " << endl;
                cin >> iDias;

                for (int j=0; j<20; j++)
                {
                    if(empleado[j].getID() == iID)
                    {
                        cout << empleado[j].getCalculaNomina(iDias) << endl;
                    }

                }

                
            break;

            case 3:
                cout << "Ingrese el ID: ";
                cin >>iID;

                for (int j=0; j<20; j++)
                {
                    if(empleado[j].getID() == iID)
                    {
                        empleado[j].toString();
                    }

                }
            break;

            case 4:
                cout << "Tenga un buen dia " << endl;
            break;

            default:
                cout << "Opcion Erronia " << endl;
            break;

        }
    }
}
