#include <iostream>

using namespace std;

int main()
{
  int num1, num2;
  string op;
  int result;

  cout<<"Enter first number : ";
  cin>>num1;

  
  cout<<"Enter operator : ";
  cin>>op;

  
  cout<<"Enter secound number : ";
  cin>>num2;

  if(op == "+")
  {
    result=num1+num2;
  }
  else if(op == "-")
  {
    result=num1-num2;
  }
  else if(op == "*")
  {
    result=num1*num2;
  }
  else if(op == "/")
  {
    result=num1/num2;
  }
  else
  {
    cout<<"invalid operator\n";
  }

  cout<<"final result is : "<<result;



  return 0;
}