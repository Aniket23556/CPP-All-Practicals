// Given two ordered arrays of integers, write a program to merge the two-arrays to get an
// ordered array.


// #include<iostream>
// using namespace std;

// int* mergeAndRemoveDuplicates(int arr1[], int size1, int arr2[], int size2, int &mergeSize)
// {
//     int* arr3 = new int[size1 + size2]; 
//     int i = 0, j = 0, k = 0;

//     while (i < size1 && j < size2) {
//         if (arr1[i] < arr2[j])
//             arr3[k++] = arr1[i++];
//         else if (arr2[j] < arr1[i])
//             arr3[k++] = arr2[j++];
//         else {
//             arr3[k++] = arr2[j++];
//             i++;  
//         }
//     }

//     while (i < size1)
//         arr3[k++] = arr1[i++];

//     while (j < size2)
//         arr3[k++] = arr2[j++];

//     mergeSize = k;  
//     return arr3;
// }

// int main() {
//     int arr1[] = {1, 3, 5, 7};
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);

//     int arr2[] = {2, 4, 4, 6, 8};
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);

//     int mergeSize = n1 + n2;

//     int *arr3 = mergeAndRemoveDuplicates(arr1, n1, arr2, n2, mergeSize);

//     cout << "Merged array is ";
//     for (int i = 0; i < mergeSize; i++)
//         cout << arr3[i] << " ";

//     delete[] arr3;  

//     return 0;
// }

#include<iostream>
#include<algorithm>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[])
{
    for(int i = 0; i < size1; i++)
        merged[i] = arr1[i];
    for(int i = 0; i < size2; i++)
        merged[i + size1] = arr2[i];
}

int removeDuplicates(int arr[], int size)
{
    if(size == 0 || size == 1)
        return size;
    
    int temp[size];
    int j = 0;
    
    for(int i = 0; i < size - 1; i++)
        if(arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    
    temp[j++] = arr[size - 1];
    
    for(int i = 0; i < j; i++)
        arr[i] = temp[i];
    
    return j;
}

int main()
{
    int arr1[] = {1, 2, 2, 3, 5, 6};
    int arr1_size = sizeof(arr1)/sizeof(arr1[0]);
    
    int arr2[] = {2, 3, 5, 7};
    int arr2_size = sizeof(arr2)/sizeof(arr2[0]);
    
    int merged_size = arr1_size + arr2_size;
    int merged[merged_size];
    
    mergeArrays(arr1, arr1_size, arr2, arr2_size, merged);
    std::sort(merged, merged + merged_size);
    merged_size = removeDuplicates(merged, merged_size);
    
    std::cout << "Merged and deduplicated array: ";
    for(int i = 0; i < merged_size; i++)
        std::cout << merged[i] << " ";
    
    return 0;
}