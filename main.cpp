#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class StudentExam : public Student
{
protected:
    int marks[5];

public:
    void getMarks()
    {
        cout << "Enter marks of 5 subjects:" << endl;

        for(int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void displayMarks()
    {
        cout << "Marks: ";

        for(int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << endl;
    }
};

class StudentResult : public StudentExam
{
private:
    int total;
    float percentage;

public:
    void calculateResult()
    {
        total = 0;

        for(int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        percentage = total / 5.0;
    }

    void displayResult()
    {
        displayStudent();
        displayMarks();

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    StudentResult s;

    s.getStudent();
    s.getMarks();
    s.calculateResult();

    cout << "\n----- Student Result -----" << endl;
    s.displayResult();

    return 0;
}
