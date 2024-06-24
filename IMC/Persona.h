#include <iostream>
using namespace std;

class Persona
{
    private:
      double dPeso;
      double dEstatura;
      double dIMC;
    public:
      Persona(double dP, double dE);
      void setIMC(double dP, double dE);
      double IMC();
      string Salud();
      string Consejo();
      string Despedida();
};

Persona::Persona(double dP, double dE){
  dPeso = dP;
  dEstatura = dE;
  dIMC = dPeso / (dEstatura * dEstatura);
}

void Persona::setIMC(double dP, double dE){
  dPeso = dP;
  dEstatura = dE;
  dIMC = dPeso / (dEstatura * dEstatura);
}

double Persona::IMC()
{
  return dIMC;
}

string Persona::Salud()
{
  if (dIMC <= 18.5)
  {
    return "Peso Insuficiente";
  }
  else if (dIMC > 18.5 && dIMC < 25 )
  {
    return "Peso Normal";
  }
  else 
  {
    return "Sobrepeso";
  } 
}

string Persona::Consejo()
{
  if (dIMC <= 18.5)
  {
    return "Peso Insuficiente: Agrega mas calorias a tu dieta y tratar de comer mas proteina. ";
  }
  else if (dIMC > 18.5 && dIMC < 25 )
  {
    return "Peso Normal: Sigue manteniendo tu dieta. ";
  }
  else 
  {
    return "Sobrepeso: Reduce las calorias de tu dieta, toma mas agua y haz ejercicio. ";
  }
}

string Persona::Despedida()
{
  return "Ten un excelente dia, Hasta pronto. ";
}