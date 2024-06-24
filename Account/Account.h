#include <iostream>
using namespace std;

class Cuenta
{
    private:
        double dBalance, dDeposito, dRetiro;
        string sNombre;

    public:
        Cuenta(string, double, double, double);
    
    double Deposito();
    bool Retiro();
    void Informacion();
    double Balance();

};

Cuenta::Cuenta (string sNombre, double dB,double dD, double dR)
{
    this -> sNombre = sNombre;
    dBalance = dB;
    dDeposito = dD;
    dRetiro = dR;
}

    double Cuenta::Deposito()
    {
      cout << "Cuanto deseria Depositar? \n $";
      cin >> dDeposito;
       cout << "Tu Balance Actual es: $" << dBalance + dDeposito << endl;
    }

    bool Cuenta::Retiro()
    {
      cout << "Cuanto deseria Retirar? \n $";
      cin >> dRetiro;
      
      if (dBalance >= dRetiro)
      {
        return true;
      }
      else
      {
        return false;
      }     
    }

   void Cuenta::Informacion()
{
  cout << "Nombre: " << sNombre << endl;
  cout << "Balance: $ " << dBalance << endl;
}
