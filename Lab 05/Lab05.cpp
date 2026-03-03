#include <iostream>
#include <string>
using namespace std;

int sumOfDigits (int n) {
    if (n == 0)
        return 0;
    return (n % 10 + sumOfDigits(n / 10));
}

double power (double x, int n) {
    if (n == 0) 
        return 1;
    else if (n < 0)
        return (1 / x * power(x, n + 1));
    return (x * power(x, n - 1));
}

string reverseString(string str) {
    if (str == "")
        return "";
    return (str[str.length() - 1]);
}

int main() {
    // Sum of Digits section
    cout << "Part 1: Sum of digits" << endl;
    cout << "Trace: sumOfDigits() = 5 + sumOfDigits(1234)" << endl;
    cout << "Trace: sumOfDigits() = 9 + sumOfDigits(123)" << endl;
    cout << "Trace: sumOfDigits() = 12 + sumOfDigits(12)" << endl;
    cout << "Trace: sumOfDigits() = 14 + sumOfDigits(1)" << endl;
    cout << "Trace: sumOfDigits() = 15" << endl;
    cout << "Result:" << sumOfDigits(12345) << endl;
    cout << "Testing sumOfDigits(9999): " << sumOfDigits(9999) << endl;
    cout << "Testing sumOfDigits(5): " << sumOfDigits(5) << endl;
    cout << "Testing sumOfDigits(10): " << sumOfDigits(10) << endl;
    // Power function section
    cout << "Part 2: Power function" << endl;
    cout << power(2,-2);
    // Reversed string section
    cout << "Part "

}