#include <iostream>
using namespace std;

// Base class 1
class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudent() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

// Base class 2
class Exam {
protected:
    int marks[3];

public:
    void getMarks() {
        cout << "Enter marks for 3 subjects:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

// Derived class using multiple inheritance
class Result : public Student, public Exam {
public:
    void displayResult() {
        int total = 0;

        displayStudent();
        displayMarks();

        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << total / 3.0 << "%" << endl;
    }
};

int main() {
    Result students[2];

    // Input for 2 students
    for (int i = 0; i < 2; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;
        students[i].getStudent();
        students[i].getMarks();
    }

    // Display results
    cout << "\n----- STUDENT RESULTS -----\n";

    for (int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << endl;
        students[i].displayResult();
    }

    return 0;
}
