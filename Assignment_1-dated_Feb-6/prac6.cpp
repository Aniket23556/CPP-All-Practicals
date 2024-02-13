// Write a function to find whether a given no. is prime or not. Use the same to
// generate the prime numbers less than 100.


#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num == 0 || num == 1)
        return false;
    for(int i=2; i <= num / 2; ++i) {
        if(num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout<<"Enter the number to check prime:";
    cin>>num;
    if (isPrime(num)==true)
        cout<<"Number is Prime."<<endl;
    else cout<<"Number is not Prime."<<endl;

    for (int i = 2; i < 100; ++i) {
        if (isPrime(i)) cout << i << " ";
    }
    return 0;
}

