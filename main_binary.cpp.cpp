#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> x;
    }

    // Binary + operator
    Number operator+(Number n)
    {
        Number temp;
        temp.x = x + n.x;
        return temp;
    }

    // Binary - operator
    Number operator-(Number n)
    {
        Number temp;
        temp.x = x - n.x;
        return temp;
    }

    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    Number n1, n2, n3;

    n1.getData();
    n2.getData();

    n3 = n1 + n2;
    cout << "Addition = ";
    n3.display();

    n3 = n1 - n2;
    cout << "Subtraction = ";
    n3.display();

    return 0;
}
