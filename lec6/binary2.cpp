//convert negative decimal to binary.
#include <iostream>
using namespace std;
#include <math.h>
int main(){
  int n= -5;
  int bit=0;
  n =5;
  int answer=0;
  int i = 0;
  while(n!=0){
    
  bit=n&1;
  answer=(pow(10,i)*bit)+answer;
  //cout<<bit<<endl;
  bit=(~bit);
  cout<<bit<<endl;
  n=n>>1;
  i++;
  }
}
