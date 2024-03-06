// Create a class Complex having real part and imaginary part as the data members. Define
// constructors with no parameter (real part is 2 and imaginary is 3), two parameters. Define a
// function print to print the complex numbers. Define functions to add two complex numbers
// where
// 1) the two numbers to be added are passed as parameters and the result is stored in third
// number which is returned from the function.
// 2) One number is passed as parameter which is added to the invoking object.


#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;
public:
    // Default constructor or Constructor with no parameter
    Complex() {
        real = 2;
        imaginary = 3;
    }

    // Constructor with two parameters
    Complex(double r, double img) {
        real = r;
        imaginary = img;
    }

    void print() {
        cout << real << "+" << imaginary << "i" << endl;
    }

    Complex sum(const Complex& c1, const Complex& c2){
        Complex result;
        result.real = c1.real + c2.real;
        result.imaginary = c1.imaginary + c2.imaginary;
        return result;
    }

    void sum(const Complex& c) {
        real += c.real;
        imaginary += c.imaginary;
    }
};

int main() {
    double real, img;
    cout<<"Enter the Real part:";
    cin>>real;
    cout<<"Enter the Imaginary part:";
    cin>>img;

    Complex c1;
    Complex c2(real, img);

    cout<<"First Complex Number=";
    c1.print();
    cout<<"Second Complex Number=";
    c2.print();

    Complex result = c1.sum(c1,c2);
    cout<<"Sum of "; c1.print(); cout<<"and "; c2.print(); cout<<"is = ";
    result.print();

    c1.sum(c2);
    cout << "Addition with single parameter: ";
    c1.print();

    return 0;
}
