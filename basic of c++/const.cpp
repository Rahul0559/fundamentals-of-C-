#include<iostream>
using namespace std;
void age1(const int age);
int main(){
  // cont pra meter
  int age;
  cout<<"enter your age; ";
  cin>>age;
  age1(age);
}
void age1(const int age){
  //age =19;
  cout<<"your age is ;"<<age<<endl;
}