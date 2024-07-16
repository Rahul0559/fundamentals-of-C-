#include<iostream>
using namespace std;
double squre(double lenght);
int main(){
  double length = 5.0;
  double area= squre(length);
  cout<<"area ; "<<area<<" cm^2"<<endl;
  return 0;
}
double squre(double lenght){
  return lenght *lenght;
}