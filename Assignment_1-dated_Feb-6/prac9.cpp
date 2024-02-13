// WAP (using switch case) to read users choice to perform one of the following 
// operations on n numbers entered by the user:
// i) Print the sum of even numbers
// ii) Print the sum of odd numbers
// iii) Calculate the sum and average of all the numbers
// iv) Print the maximum number
// v) Print the minimum number


#include <iostream>
using namespace std;

int main() {
    int choice, n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int numbers[100];

    cout << "Enter " << n << " elements:";
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    while (true)
    {
        int sum = 0, sumEven = 0, sumOdd = 0, max1 = numbers[0], min1 = numbers[0];
        cout << "1. Print the sum of even numbers\n"
                "2. Print the sum of odd numbers\n"
                "3. Calculate the sum and average of all the numbers\n"
                "4. Print the maximum number\n"
                "5. Print the minimum number\n"
                "0. Exit\n";
        cout<<"Enter your choice: ";
        cin >> choice;


        switch(choice) {
            case 1:
                for(int i = 0; i < n; i++) {
                    if(numbers[i] % 2 == 0)
                        sumEven += numbers[i];}
                cout << "Sum of even numbers: " << sumEven << endl;
                break;
            case 2:
                for(int i = 0; i < n; i++) {
                    if(numbers[i] % 2 != 0)
                        sumEven += numbers[i];}
                cout << "Sum of odd numbers: " << sumOdd << endl;
                break;
            case 3:
                for(int i = 0; i < n; i++) {
                    sum += numbers[i];}
                cout << "Sum of all numbers: " << sum << ", Average: " << (float)sum/n << endl;
                break;
            case 4:
                for(int i = 0; i < n; i++) {
                    if(max1 < numbers[i])
                        max1 = numbers[i];}
                cout << "Maximum number: " << max1 << endl;
                break;
            case 5:
                for(int i = 0; i < n; i++) {
                    if(min1 < numbers[i])
                        min1 = numbers[i];}
                cout << "Minimum number: " << min1 << endl;
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
        if(choice==0){
            break;
        }   
    }
}

