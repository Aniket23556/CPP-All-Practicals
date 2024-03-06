// Create a class fraction having numerator and denominator as the data members. Define
// constructors with no parameter, one parameter and two parameters. Create objects to illustrate
// the use of all the constructors. Define a function print to print the fraction.


#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator = 1;

public:
    // Default constructor or Constructor with no parameter
    Fraction() {
        numerator = 0;
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

    return 0;
}
