#include<iostream>
using namespace std;
int main(){
  // there are two type of type conversion 
  //implicite
  //explicite
  int x = 10;
  int y = 8;
  double percent = y/(double)x*100;
  cout<<percent<<"%";
}