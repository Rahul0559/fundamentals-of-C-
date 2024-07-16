#include<iostream>
using namespace std;
int bakepizzaa();
int bakepizzaa(string topping1);
int bakepizzaa(string topping1, string topping2);
int main(){
string topping1,topping2;
topping1="musroom";
topping2="onian";
bakepizzaa();
bakepizzaa(topping1);
bakepizzaa(topping1,topping2);

return 0;
}

int bakepizzaa(){
  cout <<"here is your pizza"<<endl;
  return 0;
}
int bakepizzaa(string topping1){
  cout<<"here is your "<<topping1<<" pizza"<<endl;
  return 0;
}
int bakepizzaa(string topping1,string topping2){
  cout<<"here is your "<<topping1<<" and "<<topping2<<" pizza"<<endl;
  return 0;
}