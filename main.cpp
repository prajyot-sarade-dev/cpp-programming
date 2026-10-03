#include <iostream>
using namespace std;

class Circle
{
    float radius;

public:
    void getData()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    float operator+()
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle
{
    float length, breadth;

public:
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float operator+()
    {
        return length * breadth;
    }
};

class Triangle
{
    float base, height;

public:
    void getData()
    {
        cout << "Enter base: ";
        cin >> base;

        cout << "Enter height: ";
        cin >> height;
    }

    float operator+()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    c.getData();
    r.getData();
    t.getData();

    cout << "\nArea of Circle = " << +c << endl;
    cout << "Area of Rectangle = " << +r << endl;
    cout << "Area of Triangle = " << +t << endl;

    return 0;
}
