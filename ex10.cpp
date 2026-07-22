#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter first number n1: ";
    cin>>n1;
     
    cout<<"Enter second number n2: ";
    cin>>n2;
     
    cout<<"Enter third number n3: ";
    cin>>n3;
      
    if(n1>n2 && n1>n3)
    {
    cout<<"The largest number among threes is: "<<n1;
    }
    else if(n2>n1 && n2>n3)
    {
    cout<<"The largest number among threes id: "<<n2;
    }
    else 
    {
     cout<<"The largest number among threes is: "<<n3;
    }   
}