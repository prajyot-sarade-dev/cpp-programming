#include<iostream>
using namespace std;
class complex
{
    float real1,real2,img1,img2,real,img;
public:
void input()
    {
        cout<<"Enter first complex number:\n ";
        cout<<"Enter first real number= ";
        cin>>real1;

        cout<<"Enter first img number= ";
        cin>>img1;

        cout<<"Enter second complex number: \n";
        cout<<"Enter second real number= ";
        cin>>real2;

        cout<<"Enter second img number= ";
        cin>>img2;

    }

    void add()
    {   cout<<"addtion of two complex number is: ";
        real=real1+real2;
        img=img1+img2;
      
     }
    

    void display()
     {
        cout<<real<<"+"<<img<<"i";
     }
};
int main()
{
 complex c;
    c.input();
    c.add();
    
    c.display();

    
}