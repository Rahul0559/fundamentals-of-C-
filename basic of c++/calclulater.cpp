#include <iostream>
using namespace std;
int main(){
 cout<<"***********************CALCULATER***********************"<<endl;
 char op;
 int num1 , num2, result;
 cout<<"please enter num1 for calculation; ";
 cin>>num1;
 cout<<"please chose (+,-,/,*); ";
 cin>>op;
 cout<<"please enter num2 for calculation; ";
 cin>>num2;
 switch(op){
  case '+':
  result = num1 +num2;
  cout<<"result of num1 + num2 is "<<result<<endl;
  break;
  case '-':
  result = num1 -num2;
  cout<<"result of num1 - num2 is "<<result<<endl;
  break;
  case '/':
  result = num1 /num2;
  cout<<"result of num1 / num2 is "<<result<<endl;
  break;
  case '*':
  result = num1 * num2;
  cout<<"result of num1 * num2 is "<<result<<endl;
  break;
  case '%':
  result = num1 % num2;
  cout<<"result of num1 % num2 is "<<result<<endl;
  break;
  default:
  cout<<"please chose opertor (+,-,/,*) in  this; "<<endl;
 }
cout<<"***********************************************************"<<endl;
}