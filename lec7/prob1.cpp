//reverse integer
//input =231
//output =123
#include <cmath>
#include <cstdint>
#include <math.h>
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int r=0;
  int answer=0;
  int digit=1;
  if(answer<INT32_MIN/10|| answer>INT32_MAX/10){
      cout<<0;
      }
  //method 1 - failed on -ve numbers.
  /*else{
  
  while(n!=0){
    r=n%10;
    n=n/10;
    cout<<r;
    }*/
//method 2 
  while(n!=0){
    digit=n%10;
    n=n/10;
    answer=(answer*10)+digit;
  }
  cout<<answer;
  }

