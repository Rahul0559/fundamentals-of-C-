#include <iostream>
using namespace std;
int main(){
  string name;
  cout<<"enter your name ";
  cin>>name;
  name.append("@gmail.com");
  cout<<name<<endl;
  name.insert(0,"@");
  cout<<name<<endl;
  cout<<name.find("@")<<endl;
  cout<<name.erase(0,2);
  return 0;
}