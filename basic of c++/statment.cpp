#include <iostream>
using namespace std;
int main(){
  // switch =is a alternative of if eslse condton statement
  int mounth;
  cout<<"enter a mounth ";
  cin>>mounth;
  switch(mounth){
    case 1:
    cout<<"mounth is january ";
    break;
     case 2:
    cout<<"mounth is feb ";
    break;
      case 3:
    cout<<"mounth is march ";
    break;
      case 4:
    cout<<"mounth is april ";
    break;
      case 5:
    cout<<"mounth is may ";
    break;
      case 6:
    cout<<"mounth is june";
    break;
   case 7:
    cout<<"mounth is july";
    break;
    case 8:
    cout<<"mounth is aguest";
    break;
    case 9:
    cout<<"mounth is september";
    break;
     case 10:
    cout<<"mounth is october";
    break;
    case 11:
    cout<<"mounth is novmber";
    break;
   case 12:
    cout<<"mounth is dec";
    break;
    default:
    cout<<"please enter (1-12)number";
    break;
  }
}