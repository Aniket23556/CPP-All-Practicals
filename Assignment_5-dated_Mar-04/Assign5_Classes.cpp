// Create a class fraction having numerator and denominator as the data members. Define
// constructors with no parameter, one parameter and two parameters. Create objects to illustrate
// the use of all the constructors. Define a function print to print the fraction.
// Define functions to add two fraction numbers
// where
// 1) the two numbers to be added are passed as parameters and the result is stored in third
// number which is returned from the function.
// 2) One number is passed as parameter which is added to the invoking object.

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator = 0;
    int denominator = 1;

public:
    // Default constructor or Constructor with no parameter
    Fraction() {
        numerator;
        denominator;
    }

    // Constructor with one parameter
    Fraction(int num) {
        numerator = num;
        denominator;
    }

    // Constructor with two parameters
    Fraction(int num, int deno) {
        numerator = num;
        denominator = deno;
    }

    void print() {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction sum(const Fraction& f1, const Fraction& f2) {
        Fraction result;
        result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
        result.denominator = f1.denominator * f2.denominator;
        return result;
    }

    void sum(const Fraction& f) {
        numerator = numerator * f.denominator + f.numerator * denominator;
        denominator *= f.denominator;
    }
};

int main() {
    int num, demo;
    cout<<"Enter the Numerator:";
    cin>>num;
    cout<<"Enter the Denominator:";
    cin>>demo;

    Fraction fraction1;
    Fraction fraction2(num);
    Fraction fraction3(num,demo);

    cout << "First Fraction: ";
    fraction1.print();
    cout << "Second Fraction: ";
    fraction2.print();
    cout << "Third Fraction: ";
    fraction3.print();

    Fraction result = fraction1.sum(fraction2, fraction3);
    cout << "Sum of Fractions when two fractions 2 & 3 are passed as parameter is = ";
    result.print();

    fraction1.sum(fraction3);
    cout << "Sum of Fractions when only one fraction 2 is passed as parameter is = ";
    fraction1.print();

    return 0;
}
