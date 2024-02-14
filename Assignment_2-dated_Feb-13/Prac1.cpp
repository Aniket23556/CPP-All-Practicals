// WAP to perform following actions on an array entered by the user:
// i) store the even-valued elements and odd valued elements in
//    2 separated arrays
// ii) Calculate and print the sum and average of the elements of array
// iii) Print the maximum and minimum element of array
// iv) Remove the duplicates from the array without using another array
// v) store the array elements in reverse order without using another array

// The program should present a menu to the user and ask for one of the options. The
// menu should also include options to re-enter array and to quit the program.

#include<iostream>
using namespace std;

int arr[100], n;

void enterArray() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
}

void separateEvenOdd() {
    int even[100], odd[100], ecount = 0, ocount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0)
            even[ecount++] = arr[i];
        else
            odd[ocount++] = arr[i];
    }
    cout << "Even Numbers: ";
    for(int i = 0; i < ecount; i++)
        cout << even[i] << " ";
    cout << "\n";
    cout << "Odd Numbers: ";
    for(int i = 0; i < ocount; i++)
        cout << odd[i] << " ";
    cout << "\n";
}

void calculations() {
    int sum = 0, min = arr[0], max = arr[0];
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    float avg = (float)sum / n;
    cout << "Sum: " << sum << " Average: " << avg << " Min: " << min << " Max: " << max << "\n";
}

void removeDuplicates() {
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n;)
            if (arr[i] == arr[j])
                for (int k = j; k < n; k++)
                    arr[k] = arr[k + 1], n--;   
            else
                j++;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

//With Swap functions
// void reverseArray() {
//     for (int i = 0; i < n / 2; i++) 
//         swap(arr[i], arr[n - i - 1]);


// Without Swap function.
void reverseArray() {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    while (true) {
        cout << "\nMenu:\n"
             << "1: Enter a new array\n" 
             << "2: Store even and odd elements separately\n" 
             << "3: Calculations\n" 
             << "4: Remove duplicates\n" 
             << "5: Reverse the array\n" 
             << "0: Exit\n"
             << "Enter selection:";
        int choice;
        cin >> choice;
        switch(choice) {
            case 1: 
                enterArray();
                break;
            case 2:
                separateEvenOdd();
                break;
            case 3:
                calculations();
                break;
            case 4:
                removeDuplicates();
                break;
            case 5:
                reverseArray();
                break;
            case 0:
                return 0;
            default:
                cout << "Invalid input\n";
        }
    }
    return 0;
}
