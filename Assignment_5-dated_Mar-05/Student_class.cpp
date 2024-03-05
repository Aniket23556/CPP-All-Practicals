#include <iostream>
using namespace std;

class Student {
private:
    int rollNum;
    int age;
    double marks;

public:
    // Constructors
    Student() : rollNum(0), age(0), marks(0.0) {}
    Student(int age) : rollNum(0), age(age), marks(0.0) {}
    Student(int age, double marks) : rollNum(0), age(age), marks(marks) {}

    // Member function to display information of a student
    void display() const {
        cout << "Roll Number: " << rollNum << ", Age: " << age << ", Marks: " << marks << endl;
    }

    // Query functions

    // To display information of all the students 
    static void queryAll(const Student students[], int n) {
        cout << "Displaying information for all students:" << std::endl;
        for (int i = 0; i < n; ++i) {
            students[i].display();
        }
    }

    // To display information of a specific student with given roll number  
    static void query(const Student students[], int n, int roll) {
        for (int i = 0; i < n; ++i) {
            if (students[i].rollNum == roll) {
                students[i].display();
                return;
            }
        }
        cout << "Student with Roll Number " << roll << " not found." << std::endl;
    }

    // To Display total number of students greater than a certain marks
    static void query(const Student students[], int n, double minMarks) {
        cout << "Displaying information for students with marks greater than " << minMarks << ":" << std::endl;
        for (int i = 0; i < n; ++i) {
            if (students[i].marks > minMarks) {
                students[i].display();
            }
        }
    }

    // Setter for roll number
    void setRollNum(int roll) {
        rollNum = roll;
    }

    // Getter for roll number
    int getRollNum() const {
        return rollNum;
    }
};

int main() {
    int n = 3; // Number of students

    // Creating an array of Student objects
    Student students[] = {Student(), Student(20), Student(25, 75.5)};

    // Setting roll numbers for each student
    for (int i = 0; i < n; ++i) {
        students[i].setRollNum(i + 1);
    }

    int choice;
    do {
        // Displaying menu
        cout << "\nMenu:\n1. Display all students\n2. Query on a particular student\n"
                     "3. Query on marks\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Student::queryAll(students, n);
                break;
            case 2:
                int rollToQuery;
                cout << "Enter the roll number to query: ";
                cin >> rollToQuery;
                Student::query(students, n, rollToQuery);
                break;
            case 3:
                double marksToQuery;
                cout << "Enter the minimum marks to query: ";
                cin >> marksToQuery;
                Student::query(students, n, marksToQuery);
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}