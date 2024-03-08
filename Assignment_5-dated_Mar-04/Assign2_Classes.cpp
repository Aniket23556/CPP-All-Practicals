// Create a class figure having 2 sides as integers. Define overloaded constructors to
// initialize the sides with 2 parameters if figure is rectangle and one parameter if figure is square.
// Also define overloaded functions to compute the area of the figures accordingly.


#include <iostream>

using namespace std;

class Figure {
private:
    int length;
    int breadth;

public:
    Figure(int s1, int s2) {
        length = s1;
        breadth = s2;
    }

    Figure(int s) {
        length = breadth = s;
    }

    // Function to calculate area of rectangle
    int area() {
        return length * breadth;
    }

    // Function to calculate area of square
    int area(int s) {
        return s * s;
    }
};

int main() {
    int a,b,c;
    cout<<"Enter the length of Rectangle:";
    cin>> a ;
    cout<<"Enter the breadh of Rectangle:";
    cin>> b ;
    cout<<"Enter the side of square:";
    cin>> c ;
    Figure rectangle(a, b);
    Figure square(c);

    cout << "Area of rectangle: " << rectangle.area() << endl;
    cout << "Area of square: " << square.area() << endl;

    return 0;
}
