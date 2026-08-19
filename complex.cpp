#include<iostream>
using namespace std;

class Complex
{
    float real, img;
public:
 void input()
 {
    cout<<"Enter the real number= ";
    cin>>real;

    cout<<"Entre the img number= ";
    cin>>img;

 }

 void display()
 {
    cout<<real<<"+"<<img<<"i";
 }
Complex add(Complex c)
{
    Complex obj;
    obj.real=real+c.real;
    obj.img=img+c.img;
    return obj;
}


};
int main()
{
    Complex c1,c2,sum;
    cout<<"Enter first complex number\n";
    c1.input();

    cout<<"Enter second complex number\n";
    c2.input();

    sum=c1.add(c2);

    cout<<"First complex number is : ";
    c1.display();

    cout<<"\nSecond complex number is : ";
    c2.display();

    cout<<"\nsum= ";
    sum.display();
}