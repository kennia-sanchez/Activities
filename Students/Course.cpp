#include <iostream>
#include <fstream>
#include Course.h
#include Group.h
using namespace std;

/* Course and Group default;

-Menu
Update the group (ask for everything)
update just the course
add new student
display information of the Group
display information of the Course
finish
*/

int main()
{
    int iOpcion, iIdentifier, iIdentifier2, iCurrent;
    string sNombre, sDepartment, sProfessor, sNombre2, sClassroom,;

    while (iOpcion != 6)
    {
        cout << "MENU"<<endl;
        cout << "1. Update the Group " <<endl;
        cout << "2. Update the Course " <<endl;
        cout << "3. Add New Student " <<endl;
        cout << "4. Information of the Group " <<endl;
        cout << "5. Information of the Course " <<endl;
        cout << "6. EXIT " <<endl;
        cin >> iOpcion;

        switch (iOpcion)
        {
        case 1:
            cout<< "Name: "<<endl;
            cin>> sNombre2;
            cout<< "Identifier: "<<endl;
            cin>> iIdentifier2;
            cout<< "Classroom: "<<endl;
            cin>> sClassroom;
            cout<< "Current Number Student: "<<endl;
            cin>> iCurrent;

            Course.setGroup(sNombre2, iIdentifier2, sClassroom, iCurrent);

            break;
        case 2:
            cout<< "Name: "<<endl;
            cin>> sNombre;
            cout<< "Department: "<<endl;
            cin>> sDepartment;
            cout<< "Identifier: "<<endl;
            cin>> iIdentifier;
            cout<< "Professor: "<<endl;
            cin>> sProfessor;

            Course.setCourse(sNombre, sDepartment, iIdentifier, sProfessor);
            break;
        case 3:

            break;
        case 4:
            Course.toString();
            break;
        case 5:

            break;
        case 6:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Error, Invalid" << endl;
            break;
        }
    }
}
