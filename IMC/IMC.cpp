#include <iostream>
#include "Persona.h"
using namespace std;

int main ()
{
  double dP, dE;
  int iOpcion;

  Persona per1(dP, dE);

  cout << "Ingresa tu peso: ";
  cin >> dP;
  cout << "Ingresa tu estatura: ";
  cin >> dE;
  per1.setIMC(dP, dE);



  while (iOpcion != 4)
  {
    cout << "MENU"<<endl;
        cout << "1) IMC" <<endl;
        cout << "2) Definir Salud" <<endl;
        cout << "3) Mostrar Consejo" <<endl;
        cout << "4) SALIDA" <<endl;
        cin >> iOpcion;

        switch (iOpcion)
        {
        case 1:
          cout << per1.IMC() <<endl;
          break;

        case 2:
          cout << per1.Salud() << endl;
          break;

        case 3:
          cout << per1.Consejo() << endl;
          break;

        case 4:
          cout << per1.Despedida() << endl;
        
        default:
          break;
        }
  }
  

  



  return 0;
}
