#include<iostream>
using namespace std;
int main(){
string question[] = {"1. waht year was c++ created?: ",
                     "2.who invented c++?: ",
                     "3. what is the predecssorof c++; ",
                     "4. is the Earth flat?; "
};
string options[][4] = {{"A.1969","B.1975","C.1985","D.1989"},
                      {"A.Guido van Rossum","B.Bjarne Strostrup","c.Jone Carmack","D.MarkZuckerburg"},
                      {"A.C","B.C++","c--","D.B++"},
                      {"A.yes","B.no","C.something","D.What's Earth?"}};

char answerkey[] ={'C','B','A','B'};

int size = sizeof(question)/sizeof(question[0]);
char guess;
int score;

for(int i = 0; i < size ; i++){
  cout<<"*******************************"<<endl;
  cout<<question[i]<<endl;
  cout<<"*******************************"<<endl;
  
 for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
  cout<<options[i][j]<<endl;
  
  } 

}
}