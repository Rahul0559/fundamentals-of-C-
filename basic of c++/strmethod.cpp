#include <iostream>
using namespace std;
main(){
string name;
cout<<"enter your name; "<<endl;
cin>>name;
cout<<name;
if(name.length() > 12){
cout<<" you name over than 12 charter"<<endl;
}
else{
  cout<<" you name less than 12 charter"<<endl;
}
string name_2;
cout<<"enter your name; "<<endl;
cin>>name_2;
if(name_2.empty()){
cout<<"pease enter your name "<<endl;
}
else{
  cout<<"hello  "<<name_2;
}
string name_3 ="sayam";
name_3.clear();
cout<<name_3<<"hello";
return 0;
}
