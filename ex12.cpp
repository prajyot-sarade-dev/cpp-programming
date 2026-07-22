#include<iostream>
using namespace std;
int main()
{
    int year;

    cout<<"Enter the year: ";
    cin>>year;


    if(year%4==0)
    {
    cout<<"The year you entered is leap year";
     }
    else
    {
    cout<<"The year you entered is not leap year";
    }
}