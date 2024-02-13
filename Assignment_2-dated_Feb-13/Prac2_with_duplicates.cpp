// Given two ordered arrays of integers, write a program to merge the two-arrays to get an
// ordered array.

#include<iostream>
using namespace std;

int* mergeArrays(int arr1[], int size1, int arr2[], int size2)
{
    int* arr3 = new int[size1 + size2]; 
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    
    while (i < size1)
        arr3[k++] = arr1[i++];

    
    while (j < size2)
        arr3[k++] = arr2[j++];

    return arr3;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 3, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int *arr3 = mergeArrays(arr1, n1, arr2, n2);

    cout << "Merged array is ";
    for (int i = 0; i < n1 + n2; i++)
        cout << arr3[i] << " ";

    delete[] arr3;  

    return 0;
}

