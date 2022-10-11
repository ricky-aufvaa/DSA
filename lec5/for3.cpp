//is n prime?

#include <iostream>
using namespace std;
int main(){
  int n ;
  cin>>n;
  int isprime=1;
  for(int i=2;i<=(n/2);i++){
    if(n%i==0){
      isprime=0;
      cout<<"not prime";
      break;
    }
    
    
  }
  if(isprime==1){
      cout<<"prime";
    }
    
}
