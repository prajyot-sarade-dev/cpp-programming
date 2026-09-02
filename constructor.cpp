#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string emp_name;
    int emp_id;
    float salary;
    string city;

public:

    // 1. Default Constructor
    Employee()
    {
        emp_name = "Unknown";
        emp_id = 0;
        salary = 0;
        city = "Unknown";
    }

    // 2. Parameterized Constructor
    Employee(string name, int id, float sal, string c)
    {
        emp_name = name;
        emp_id = id;
        salary = sal;
        city = c;
    }

    // 3. Copy Constructor
    Employee(const Employee &e)
    {
        emp_name = e.emp_name;
        emp_id = e.emp_id;
        salary = e.salary;
        city = e.city;
    }

    void display()
    {
        cout << "Employee Information" << endl;
        cout << "Name   : " << emp_name << endl;
        cout << "ID     : " << emp_id << endl;
        cout << "Salary : " << salary << endl;
        cout << "City   : " << city << endl;
    }
};

int main()
{
    // Only ONE object creation
    Employee e("Prajyot", 64, 45000, "Kolhapur");

    // Display only once
    e.display();

    return 0;
}