#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n , reminder,orignal,digits,result;

  cout<<"Enter the number==> ";
  cin>>n;
  orignal=n;
  while(n!=0){
    digits++;
    n=n%10;
  }
  n=orignal;
  while(n!=0){
    reminder=n%10;
    result=result+ pow(reminder,digits);
  }

  if(orignal==result){
    cout<<"The number is Armstrong";

  }
  else{
    cout<<"The number is not Armstrong";
  }
}