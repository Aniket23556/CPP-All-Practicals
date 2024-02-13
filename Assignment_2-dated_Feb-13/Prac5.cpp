// WAP to read array elements till a negative number is entered and compute the sum of
// numbers divisible by 3.


#include <iostream>
using namespace std;

int computeSum(int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 3 == 0)
            sum += arr[i];
    }
    return sum;
}

int main() 
{
    int arr[1000];
    int size = 0;

    cout << "Enter array elements (negative number to stop):";
    while(true)
    {
        int num;
        cin >> num;
        
        if(num < 0)
            break;

        arr[size] = num;
        size++;
    }
    cout << "Sum of numbers divisible by 3: " << computeSum(arr, size) << endl;

    return 0;
}

