#include<iostream>
int main(){
  int *numptr = NULL;

  numptr = new int;

  *numptr = 19;

  std::cout<<"addresh "<<numptr<<"\n";
  std::cout<<"value "<<*numptr<<"\n";

  delete numptr;

  return 0;
}