#include <iostream>
using namespace std;
namespace first{
  int x =1;
}
int main(){
 int x =2;
 cout<<x<<endl;
  cout<<first::x<<endl;
 return 0;

}