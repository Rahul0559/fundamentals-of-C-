#include<iostream>
using namespace std;
int main(){
int arry[][3]={{1,2,3},
              {4,5,6},
              {1,2,3}};
int row = sizeof(arry)/sizeof(arry[0]);
int cloumn = sizeof(arry)/sizeof(arry[0][0]);
for(int i = 0; i < row; i++){
  for(int j = 0; j < row; j++){
    cout<<arry[i][j]<<"  ";

  }
cout<<" ";
}
}
