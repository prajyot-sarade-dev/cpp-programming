#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Binary + operator
    Complex operator+(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    // Binary - operator
    Complex operator-(Complex c)
    {
        Complex temp;

        temp.real = real - c.real;
        temp.imag = imag - c.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.getData();

    cout << "\nEnter second complex number:" << endl;
    c2.getData();

    c3 = c1 + c2;

    cout << "\nAddition = ";
    c3.display();

    c3 = c1 - c2;

    cout << "Subtraction = ";
    c3.display();

    return 0;
}
