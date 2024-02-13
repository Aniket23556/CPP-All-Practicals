// WAP to compute the sum of the first n terms of the following series
// S =1-2+3-4+5…………….

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            sum -= i; // subtracting even terms
        else
            sum += i; // adding odd terms
    }
    cout << "Sum of series: " << sum;
    return 0;
}

