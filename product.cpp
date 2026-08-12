#include <iostream>
using namespace std;

class Product
{
private:
    string name;
    int id;
    char quantity;
    float price;

public:
    void accept()
    {
        cout << "Enter product Name: ";
        cin >> name;

        cout << "Enter product id: ";
        cin >> id;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout <<"Enter price: ";
        cin>>price;
    } 
    void display()
    {
        cout << "Product Name: " << name << endl;
        cout << "Product id: " << id<< endl;
        cout << "Qantity: " << quantity << endl;
        cout << "Price: " << price<< endl;
    }
    
};
int main()
{
    Product s;
 
    s.accept();
    s.display();
}