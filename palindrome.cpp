#include<iostream>
using namespace std;
int main()
{
    
    int n , reverse=0 , reminder ,o;
    cout<<" Enter the number: ";
    cin>>n;
    o=n;
    while(n!=0){
        reminder=n % 10;
        reverse=reverse*10+reminder;
        n=n/10;
    }
    if(o==reverse)
    {
        cout<<"The number was palindrome";
    }
    else{
        cout<<"The number was not palindrome";
    }
}