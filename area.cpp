
#include <iostream>
using namespace std;

class Shape
{
public:

    // Area of circle
    void area(float radius)
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }

    // Area of rectangle
    void area(float length, float width)
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }

    // Area of square
    void area(int side)
    {
        cout << "Area of Square = " << side * side << endl;
    }
};

int main()
{
    Shape s;

    float radius, length, width;
    int side;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "Enter side of square: ";
    cin >> side;

    s.area(radius);
    s.area(length, width);
    s.area(side);

    return 0;
}

