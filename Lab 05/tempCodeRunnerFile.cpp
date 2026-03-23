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
    if(str.length() <= 1)
        return str;
    return str[str.length() - 1] + reverseString(str.substr(0, str.length() - 1));
}

int fibonacci (int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return n + fibonacci(n - 1);
}

int countOccurrences (int arr[], int size, int target) {
    if (size == 0)
        return 0;
    if (arr[size - 1] == target)
        return 1 + countOccurrences(arr, size - 1, target);
    else
        return countOccurrences(arr, size - 1, target);
}

int main() {
    cout << "Part 1: Sum of digits" << endl;
    cout << "Testing sumOfDigits(12345)" << endl;
    cout << "Trace: sumOfDigits() = 5 + sumOfDigits(1234)" << endl;
    cout << "Trace: sumOfDigits() = 9 + sumOfDigits(123)" << endl;
    cout << "Trace: sumOfDigits() = 12 + sumOfDigits(12)" << endl;
    cout << "Trace: sumOfDigits() = 14 + sumOfDigits(1)" << endl;
    cout << "Trace: sumOfDigits() = 15" << endl;
    cout << "Result: " << sumOfDigits(12345) << endl;

    cout << "Part 2: Power function" << endl;
    cout << "Testing power (2,3)" << endl;
    cout << "Trace: power(2,-2) = (1/2) * power(2,-1)" << endl;
    cout << "Trace: power(2,-1) = (1/2) * power(2,0)" << endl;
    cout << "Trace: power(2,0) = 1" << endl;
    cout << "Trace: power(2,-1) = 1/2" << endl;
    cout << "Trace: power(2,-2) = 1/4" << endl;
    cout << "Result: " <<power(2,-2);

    cout << "Part 3: Reverse string" << endl;
    cout << "Testing reverseString(\"Hello\")" << endl;
    cout << "Trace: reverseString(\"Hello\") = 'o' + reverseString(\"Hell\")" << endl;
    cout << "Trace: reverseString(\"Hell\") = 'l' + reverseString(\"Hel\")" << endl;
    cout << "Trace: reverseString(\"Hel\") = 'l' + reverseString(\"He\")" << endl;
    cout << "Trace: reverseString(\"He\") = 'e' + reverseString(\"H\")" << endl;
    cout << "Trace: reverseString(\"H\") = \"H\"" << endl;
    cout << "Result: "<<reverseString("Hello") << endl;

    cout << "Part 4: Fibonacci Sequence" << endl;
    cout << "Testing fibonacci(10)" << endl;
    cout << "Part 4: Fibonacci Sequence" << endl;
    cout << "Trace: fibonacci(10) = 10 + fibonacci(9)" << endl;
    cout << "Trace: fibonacci(9) = 9 + fibonacci(8)" << endl;
    cout << "Trace: fibonacci(8) = 8 + fibonacci(7)" << endl;
    cout << "Trace: fibonacci(7) = 7 + fibonacci(6)" << endl;
    cout << "Trace: fibonacci(6) = 6 + fibonacci(5)" << endl;
    cout << "Trace: fibonacci(5) = 5 + fibonacci(4)" << endl;
    cout << "Trace: fibonacci(4) = 4 + fibonacci(3)" << endl;
    cout << "Trace: fibonacci(3) = 3 + fibonacci(2)" << endl;
    cout << "Trace: fibonacci(2) = 2 + fibonacci(1)" << endl;
    cout << "Trace: fibonacci(1) = 1" << endl;
    cout << "Result" << fibonacci(10) << endl;

    cout << "Part 5: Count occurences in array" << endl;
    cout << "Testing: countOccurrences(arr,7,2)" << endl;
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    cout << "Trace: countOccurrences(arr,7,2) = 0 + countOccurrences(arr,6,2)" << endl;
    cout << "Trace: countOccurrences(arr,6,2) = 1 + countOccurrences(arr,5,2)" << endl;
    cout << "Trace: countOccurrences(arr,5,2) = 0 + countOccurrences(arr,4,2)" << endl;
    cout << "Trace: countOccurrences(arr,4,2) = 1 + countOccurrences(arr,3,2)" << endl;
    cout << "Trace: countOccurrences(arr,3,2) = 0 + countOccurrences(arr,2,2)" << endl;
    cout << "Trace: countOccurrences(arr,2,2) = 1 + countOccurrences(arr,1,2)" << endl;
    cout << "Trace: countOccurrences(arr,1,2) = 0 + countOccurrences(arr,0,2)" << endl;
    cout << "Trace: countOccurrences(arr,0,2) = 0" << endl;
    cout << "Result: " << countOccurrences(arr,7,2) << endl;
}