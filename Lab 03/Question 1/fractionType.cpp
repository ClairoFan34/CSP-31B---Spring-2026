#include "fractionType.h"
#include <iostream>
using namespace std;

int main () {
    fractionType x;
    fractionType y;
    fractionType z;
    fractionType f1(1,3);

    cout << "Enter fractions as a/b" << endl;
    cout << "Enter first fraction: ";
    cin >> x;
    cout << endl;
    cout << "Enter second fraction: ";
    cin >> y;
    cout << endl;
    // You can change the operator bewtween x and y to change how x and y interact
    z = x + y;
    // The message is for addition though as that what the assignmets asks for
    cout << "The sum of your values is : " << z << endl;

    // pre and post increment test
    cout << ++f1 << endl;
    cout << f1++ << endl;
    cout << f1-- << endl;
    cout << f1 << endl;
}