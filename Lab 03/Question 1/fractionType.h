#include <iostream>
#include <numeric>
using namespace std;
class fractionType {
    private:
        int numerator;
        int denominator;
    public:
        fractionType (int numerator = 0, int denominator = 1) {
            this->numerator = numerator;
            this->denominator = denominator;
            simplify();
        }
        void simplify() {
            int divisor = gcd(numerator, denominator);

            numerator /= divisor;
            denominator /= divisor;

            if (denominator < 0) {
                numerator = -numerator;
                denominator = -denominator;
            }
        }

        fractionType operator+(const fractionType& other) const {
            fractionType result( numerator * other.denominator + denominator * other.numerator, denominator * other.denominator);
            result.simplify();
            return result;
        }

        fractionType operator-(const fractionType& other) const {
            fractionType result(numerator * other.denominator - denominator * other.numerator, denominator * other.denominator);
            result.simplify();
            return result;
        }

        fractionType operator*(const fractionType& other) const {
            fractionType result(numerator * other.numerator, denominator * other.denominator);
            result.simplify();
            return result;
        }

        fractionType operator/(const fractionType& other) const {
            fractionType result(numerator * other.denominator, denominator * other.numerator);
            result.simplify();
            return result;
        }

        bool operator<(const fractionType& other) {
            return numerator * other.denominator < denominator * other.numerator;
        }
        
        bool operator==(const fractionType& other) {
            return numerator * other.denominator == denominator * other.numerator;
        }

        fractionType& operator++() {
            numerator++;
            denominator++;
            return *this;
        }

        fractionType operator++(int) {
            fractionType temp = *this;
            numerator++;
            denominator++;
            return temp;
        }

        fractionType& operator--() {
            numerator--;
            denominator--;
            return *this;
        }

        fractionType operator--(int) {
            fractionType temp = *this;
            numerator--;
            denominator--;
            return temp;
        }

        friend istream& operator>>(istream& in, fractionType& fraction) {
            char slash;
            in >> fraction.numerator >> slash >> fraction.denominator;
            fraction.simplify();
            return in;
        }

        friend ostream& operator<<(ostream& out, const fractionType& fraction) {
            out << fraction.numerator << " " << fraction.denominator;
            return out;
        }
    };