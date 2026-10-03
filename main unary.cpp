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

    void operator++()
    {
        ++x;
    }

    void operator--()
    {
        --x;
    }

    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    Number n;

    n.getData();

    cout << "Original value: ";
    n.display();

    ++n;
    cout << "After increment: ";
    n.display();

    --n;
    cout << "After decrement: ";
    n.display();

    return 0;
}
