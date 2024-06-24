#include <iostream>
#include "Departamento.h"
using namespace std;

class Empleado
{
    private:
        int iIDEmp;
        string sNombreEmp,sApellidoP,sApellidoM;
        string sCurp;
        double dSalario;
        double dImpuesto;
        double dTotal;
        Departamento Jefe;
    public:
        Empleado();
        Empleado(int,string,string,string,string,double,double,double,Departamento);
        void setDarDeAlta(int,string,string,string,string,double,double, Departamento);
        double getCalculaNomina(int);
        int getID();
        void toString();
        void setDepartamento(Departamento);
        Departamento getDepartamento();
};

Empleado::Empleado()
{
    iIDEmp = 0;
    sNombreEmp = "N/A";
    sApellidoP = "N/A";
    sApellidoM = "N/A";
    sCurp = "N/A";
    dSalario = 0.0;
    dImpuesto = 0.0;
    dTotal = 0.0;
}

Empleado::Empleado(int iID,string sN,string sAP,string sAM,string sC,double dS,double dI,double dT, Departamento dJ)
{
    iIDEmp = iID;
    sNombreEmp = sN;
    sApellidoP = sAP;
    sApellidoM = sAM;
    sCurp = sC;
    dSalario = dS;
    dImpuesto = dI;
    dTotal = dT;
    Jefe = dJ;
}

void Empleado::setDarDeAlta(int iID,string sN,string sAP,string sAM,string sC,double dS,double dI, Departamento dJ)
{
    iIDEmp = iID;
    sNombreEmp = sN;
    sApellidoP = sAP;
    sApellidoM = sAM;
    sCurp = sC;
    dSalario = dS;
    dImpuesto = dI;
    Jefe = dJ;
}

int Empleado::getID()
{
    return iIDEmp;
}

double Empleado::getCalculaNomina(int iDias)
{
    double dImpuestos1 = (dSalario * iDias) * dImpuesto;
    dTotal = (dSalario * iDias) -  dImpuestos1;
    return dTotal;
}

void Empleado::toString()
{
    cout << "ID: " << iIDEmp << endl;
    cout << "Nombre: " << sNombreEmp << " " << sApellidoP << " " << sApellidoM << endl;
    cout << "Curp: " << sCurp << endl;
    cout << "Salario por Dia: $ " << dSalario << " Impuestos: $ " << dImpuesto << " Pago Total: $ " << dTotal << endl;
    cout << endl;
}

