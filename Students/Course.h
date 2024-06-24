#include <iostream>
#include <fstream>
using namespace std;

/* Class Course
-Attributes
name(string)
department (string)
identifier (int) -1
professor (string)

-Methods
getting / setters
toString
Default constructor
constructor with all parameters
*/

Class Course 
{
    private:
    string sN,sD,sP;
    int iI;

    public:
    Course();
    Course(string,string,int,string);
    void toString();
    void setCourse();
    string getCourse();

};

Course::Course() 
{
    string sN = "N/A";
    string sD = "N/A";
    int iI = -1;
    string sP = "N/A";
}

Course::Course (string sNombre,string sDepartment,int iIdentifier,string sProfessor)
{
    sN = sNombre;
    sD = sDepartment;
    iI = iIdentifier;
    sP = sProfessor;
}

void Course::setCourse(string sNombre, string sDepartment, int iIdentifier, string sProfessor)
{
    sN = sNombre;
    sD = sDepartment;
    iI = iIdentifier;
    sP = sProfessor;
}

void Course::toString()
{
    cout<<sN<<endl;
    cout<<sD<<endl;
    cout<<iI<<endl;
    cout<<sP<<endl;
}

