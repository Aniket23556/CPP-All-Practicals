// WAP to compute the sum of the first n terms of the following series
// S = 1+1/2+1/3+1/4+……

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0/i;
    }
    cout << "Sum of series: " << sum;
    return 0;
}

