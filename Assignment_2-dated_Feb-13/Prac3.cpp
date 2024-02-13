// WAP that search a given element x in a set of N numbers using Linear search

// i) When the data is unsorted
// ii) When the data is sorted


#include<iostream>
using namespace std;

// Linear search for unsorted data
int searchUnsorted(int arr[], int n, int x)
{
   for(int i = 0; i < n; i++)
   {
      if(arr[i] == x)
         return i;   
   }
   return -1;  
}

// Linear search for sorted data
int searchSorted(int arr[], int n, int x)
{
   for(int i = 0; i < n; i++)
   {
      if(arr[i] == x)
         return i;   
      else if (arr[i] > x)
         return -1; 
   }
   return -1;
}

int main()
{
   int unsorted_array[] = {3, 2, 1, 5, 4};
   int n_unsorted = sizeof(unsorted_array)/ sizeof(unsorted_array[0]);
   int x = 2;
   cout << "Unsorted Search: " << searchUnsorted(unsorted_array, n_unsorted, x) << endl;

   int sorted_arr[] = {1, 2, 3, 4, 5};
   int n_sorted = sizeof(sorted_arr)/ sizeof(sorted_arr[0]);
   cout << "Sorted Search: " << searchSorted(sorted_arr, n_sorted, x) << endl;

   return 0;
}

