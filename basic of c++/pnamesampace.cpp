#include<iostream>
using namespace std;
namespace first{
  int x =10;
  }
namespace secound{
  int x=300;
}
namespace third{
  int x=400;
}
int main(){
 int x =10;
 cout<<x<<endl;
 cout<<secound::x<<endl; 
 cout<<secound::x<<endl; 
}
