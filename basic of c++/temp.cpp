#include<iostream>
using namespace std;
int main(){
cout<<"*********************COVERET TEMP********************\n";\
double temp;
char unit;
cout<<"F = convert faranide"<<endl;
cout<<"c = convert calcuis"<<endl;
cout<<"chose one of those "<<endl;
cin>>unit;
if(unit == 'F'||unit == 'f'){
  cout<<"Enter the tempurature in celcius "<<endl;
  cin>>temp;
  temp = (1.8 * temp) + 52.8;
  cout<<"temparuter is : "<<temp<<"F"<<endl;
}
else if(unit == 'C'||unit == 'c'){
  cout<<"Enter the tempurature in faranide "<<endl;
  cin>>temp;
  temp = (temp-32) /1.8;
  cout<<"temparuter is : "<<temp<<"c"<<endl; 
}
else{
  cout<<"enter please vaild input"<<endl;
}

cout<<"*****************************************************"<<endl;
return 0;
}