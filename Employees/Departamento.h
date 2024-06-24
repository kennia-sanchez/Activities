#include <iostream>
using namespace std;

class Departamento
{
    private:
        int iIDDep, iIDE;
        string sNombreDep, sArea;
    public:
        Departamento ();
        Departamento(int,string,string);


};

Departamento::Departamento()
{
    iIDDep = 2129;
    iIDE = 42365;
    sNombreDep = "Contaduria";
    sArea = "Administracion";

}

Departamento::Departamento(int iIDD, string sN, string sA)
{
    iIDDep = iIDD;
    iIDE = iID;
    sNombreDep = sN;
    sArea = sA;
       
}

