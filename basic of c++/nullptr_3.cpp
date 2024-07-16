#include<iostream>
using namespace std;
int main(){

 char *pgrade = NULL;
 int size;
 cout<<"enter a size of arry; ";
 cin>>size;
 pgrade = new char[size];

 for(int i = 0; i < size ; i++){
  cout<<"enter grade "<<i+1<<": ";
  cin>>pgrade[i];
 }
  for(int j = 0; j < size ; j++){
  cout<< pgrade[j] <<" ";
 }
delete pgrade;

 return 0;

}