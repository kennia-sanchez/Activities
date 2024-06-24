#include <iostream>
#include <ftream>
using namespace std;

/* Class Group
-Attributes
course
students (array strings) 40
identifier (int)
classroom (string)
current number student (int)

-Methods
getting / setters except for the student away
constructor that receives all parameters ; except array
default constructor setting similar values as the course class
toString
bol addStudent (string)
*/

Class Group
{
    private:
    string Students [40];
    int iI, iNo;
    string sC;

    public:
    Group();
    Group(string,int,string,int)
    bool addStudent ();
    void toString();
    void setGroup();
    string getGroup();

};

Group::Group (string sStudents, string sNombre2, int iIdentifier2, string sClassroom, int iCurrent)
{
    iI = iIdentifier2;
    sC = sClassroom;
    iNo = iCurrent;
    sN = sNombre2;
}

void Group::setGroup(string sNombre2, int iIdentifier2, string sClassroom, int iCurrent)
{
    iI = iIdentifier2;
    sC = sClassroom;
    iNo = iCurrent;
    sN = sNombre2;
}

