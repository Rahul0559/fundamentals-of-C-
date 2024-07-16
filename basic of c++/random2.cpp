#include <iostream>
#include<ctime>
using namespace std;
int main(){
 srand(time(0));
 int rand_num = rand()%5;
 cout<<rand_num<<endl;
 switch (rand_num){
  case 1:
  cout<<"you win tv";
  break;
  case 2:
  cout<<"you win watch";
  break;
  case 3:
  cout<<"you win a mobile";
  break;
  case 4:
  cout<<"try next time";
  break;
 }
}