//Test Program personType
  
#include <iostream>  
#include <string>
#include "personType.h" 
 
using namespace std;

int main()
{
    personType student1("Lisa", "Regan");
    personType student2("Lisa", "Smith");

    cout << "Student 1: ";
    student1.print();
    cout << endl;

    cout << "Student 2: ";
    student2.print();
    cout << endl << endl;

    cout << "Student 1 First Name: " << student1.getFirstName() << endl;
    cout << "Student 1 Last Name: " << student1.getLastName() << endl << endl;

    student1.setFirstName("Emily");
    student1.setLastName("Johnson");

    cout << "After name change, Student 1: ";
    student1.print();
    cout << endl << endl;

    student2.setName("Michael", "Brown");
    cout << "After setName, Student 2: ";
    student2.print();
    cout << endl;

    if (student1.checkName(student2))
        cout << "Student 1 and Student 2 have the same first name." << endl;
    else
        cout << "Student 1 and Student 2 do NOT have the same first name." << endl;

    return 0;
}
