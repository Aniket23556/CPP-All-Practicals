// Write a program to calculate GCD of two numbers.

#include <iostream>
using namespace std;

class GCD {
    int num1, num2;

public:
    GCD(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    // Function to calculate the GCD.
    int CalculateGCD() {
        // int temp;
        // int a = num1, b = num2;
        // while (b != 0) {
        //     temp = b;
        //     b = a % b;
        //     a = temp;
        // }
        // return a;
        int i, gcd;
        for(i=1;i<=num1; i++)
        {
            if (num1%i==0 && num2%i==0)
            {
                gcd=i;
            }
        }  
        return gcd;
    }

    int getNum1() {
        return num1;
    }

    int getNum2() {
        return num2;
    }
};

int main() {
    GCD gcdObj(54, 18);
    
    cout << "The GCD of " << gcdObj.getNum1() << " and " << gcdObj.getNum2() << " is " << gcdObj.CalculateGCD();

    return 0;
}
