//decimal to binary
#include <iostream>
using namespace std;
#include <math.h>
int main(){
  int n ;
  cin>>n;
  int answer=0;
  int i =0;
  while(n!=0){
   int bit=n&1;
  // cout << bit;
   answer= (pow(10,i)*bit)+answer;
   //cout<<answer;
   n=n>>1;
   i++;
  }
  cout<<answer;

}
