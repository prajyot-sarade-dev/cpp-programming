#include <iostream>
using namespace std;

class Employ
{
private:
    string name;
    int id;
    float salary;
    char department;

public:
    void accept()
    {
        cout << "Enter Employ Name: ";
        cin >> name;

        cout << "Enter Employ id: ";
        cin >> id;

        cout << "Enter salary: ";
        cin >> salary;

        cout <<"Enter your department: ";
        cin>>department;
    } 
    void display()
    {
        cout << "Employ Name: " << name << endl;
        cout << "Employ id: " << id<< endl;
        cout << "salary: " << salary << endl;
        cout << "Your Department: " << department<< endl
    }
    
};
int main()
{
    Employ s;
 
    s.accept();
    s.display();
}