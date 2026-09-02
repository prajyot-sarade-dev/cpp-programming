#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:

    // 1. Default Constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // 2. Parameterized Constructor
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    // 3. Copy Constructor
    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    // Calculate and display area
    void display()
    {
        float area = length * breadth;

        cout << "\nLength  : " << length;
        cout << "\nBreadth : " << breadth;
        cout << "\nArea    : " << area << endl;
    }
};

int main()
{
    float l, b;

    // Input from user
    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    // Only ONE object creation
    Rectangle r(l, b);

    // Display only once
    r.display();

    return 0;
}