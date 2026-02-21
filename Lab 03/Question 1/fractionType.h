#include <iostream>
using namespace std;
class fractionType {
    private:
        int numerator;
        int denominator;
    public:
        fractionType (int numerator = 0, int denominator = 1) {
            this->numerator = numerator;
            this->denominator = denominator;
        }

        fractionType operator+(const fractionType& other) {
            return fractionType(
                numerator * other.denominator + denominator * other.numerator, denominator * other.denominator
            );
        }

        fractionType operator-(const fractionType& other) {
            return fractionType(
                numerator * other.denominator - denominator * other.numerator, denominator * other.denominator
            );
        }

        fractionType operator*(const fractionType& other) {
            return fractionType(
                numerator * other.numerator, denominator * other.denominator
            );
        }

        fractionType operator/(const fractionType& other) {
            return fractionType(
                numerator * other.denominator, denominator * other.numerator
            );
        }

        bool operator<(const fractionType& other) {
            return numerator * other.denominator < denominator * other.numerator;
        }
        
        bool operator==(const fractionType& other) {
            return numerator * other.denominator == denominator * other.numerator;
        }

        friend istream& operator>>(istream& in, fractionType& fraction) {
            char slash;
            in >> fraction.numerator >> slash >> fraction.denominator;
            return in;
        }

        friend ostream& operator<<(ostream& out, const fractionType& fraction) {
            out << fraction.numerator << "/" << fraction.denominator;
            return out;
        }
    };