#include<iostream>
using namespace std;
void swipe(string &x ,string &y);
int main(){
  string x = "10";
  string y ="20";
   swipe(x,y);

  cout<<"X; "<<&x<<endl;
  cout<<"y; "<<&y<<endl;

}
 void swipe(string &x ,string &y){
  string temp;
  temp=x;
  x=y;
  y=temp;

  cout<<"x ;"<<&x<<endl;
  cout<<"y ;"<<&y<<endl;
 }