//personTypeImp.cpp
    
#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

    //constructor
personType::personType(string first, string last) 

{ 
    firstName = first;
    lastName = last;
}

void personType::setFirstName (string first) {
    firstName = first;
}

void personType::setLastName (string last) {
    lastName = last;
}

void personType::setMiddleName (string middle) {
    middleName = middle;
}

bool personType::checkName (personType person) {
        return this ->firstName == person.firstName;
}