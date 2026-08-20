#include <iostream>
using namespace std;

class Fraction
{
    int a, b;

public:
    void input()
    {
        cout << "Enter numerator: ";
        cin >> a;

        cout << "Enter denominator: ";
        cin >> b;
    }

    Fraction add(Fraction f)
    {
        Fraction result;

        result.a = (a * f.b) + (b * f.a);
        result.b = b * f.b;

        return result;
    }

    void display()
    {
        cout << a << "/" << b;
    }
};

int main()
{
    Fraction f1, f2, sum;

    cout << "Enter first fraction:\n";
    f1.input();

    cout << "\nEnter second fraction:\n";
    f2.input();

    sum = f1.add(f2);

    cout << "\nSum = ";
    sum.display();

    return 0;
}