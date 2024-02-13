// WAP to read an array of n elements and compute the sum of elements stored at the odd
// index values.

#include<iostream>
using namespace std;

int OddIndexsum(int arr[], int n) 
{
    int sum = 0;
    for(int i = 1; i < n; i += 2) 
    {
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    
    int sum = OddIndexsum(arr, n);
    cout << "Sum of elements at odd indexes: " << sum << endl;
    
    return 0;
}

