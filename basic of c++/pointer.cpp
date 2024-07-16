#include<iostream>
using namespace std;
int main(){
  //pointer = a variable that store a memory sddresh 
  //&addreshof opertor
  //*derefrence opertor
  string name = "bro";
  string *pname =&name;

  int age =18;
  int *P_age = &age;

  int arry[] ={1,2,3,54,6,78,9};
  int *P_arry = arry;

  cout<<pname<<endl;
  cout<<*pname<<endl;

  cout<<P_age<<endl;
  cout<<*P_age<<endl;

  cout<<P_arry<<endl;
  cout<<*P_arry<<endl; 
  

}