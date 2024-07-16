#include<iostream>
int main(){
  int *pointer = nullptr;
  int x=12;

  pointer =&x;
  
  if(pointer==nullptr){
    std::cout<<"value not assing"<<std::endl;
  }
  else{
    std::cout<<"value assing"<<"\n";
    std::cout<<*pointer;
  }
}