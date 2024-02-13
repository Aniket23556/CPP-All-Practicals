// WAP to print the sum and product of digits of an integer.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, product = 1;
    cout << "Enter an integer: ";
    cin >> n;
    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n = n / 10;
    }
    cout << "Sum of digits: " << sum << "\nProduct of digits: " << product << endl;
    return 0;
}


