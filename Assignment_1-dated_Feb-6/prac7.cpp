// WAP to compute the factors of a given number.

#include<iostream>
using namespace std;

void calculateFactors(int n) {
    cout << "Factors of " << n << " are: ";
    for(int i=1; i <= n; i++) {
        if(n % i == 0)
            cout << i << " ";
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    calculateFactors(number);
    return 0;
}
