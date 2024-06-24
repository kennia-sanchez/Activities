#include <iostream>
#include "Account.h"
using namespace std;

int main ()
{
    int iMenu;
    string sNombre;
    double dB, dD, dR;

    cout << "Ingrese el Nombre de la Cuenta y su Balance " << endl;
    cout << "Nombre: ";
    cin >> sNombre;

    cout << "Balance: $";
    cin >> dB;


    Cuenta cuenta1 (sNombre, dB, dD, dR);


        while (iMenu != 4)
        {
          cout << "Menu" << endl;
          cout << " 1.- Deposito \n 2.- Retiro \n 3.- Informacion de la Cuenta \n 4.- Salir " << endl;
          cin >> iMenu;

            switch (iMenu)
            {
            case 1:

                cuenta1.Deposito();
                break;

            case 2:
            
                if (cuenta1.Retiro() == false)
                  {
                    cout << "Balance Insuficiente" << endl;
                  }
                else
                  {
                    cout << "Aprovado" << endl;
                   }    
                break;
            
            case 3:

                 cuenta1.Informacion();
                break;
            
            default:
                break;
            }
        }

    
    return 0;    

}
