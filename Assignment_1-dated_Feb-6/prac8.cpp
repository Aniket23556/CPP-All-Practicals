// WAP to print a triangle of stars as follows (take number of lines from user):
// *
// ***
// *****
// *******
// *********



#include <iostream>
using namespace std;

int main() {
    int lines;
    cout << "Enter the number of lines: ";
    cin >> lines;

    for(int i = 0; i < lines; i++) {
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}

