/* 1
   21
   321
   4321*/

#include <iostream>
using namespace std;
int main(){
  //observe- col=row number. 2. each row is starting from row numebr and ending in 1. (decrement).
  int n;
  cin>> n;
  
  for(int row=1;row<=n;row++) {
    int count=row;
    for (int col=1 ; col<=row;col++) {
      cout<<count;  
      count=count-1; 
    } 
    cout<<endl;
  }
}
