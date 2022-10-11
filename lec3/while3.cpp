//find out if the given number is prime or not.
#include <iostream>
using namespace std;
int main(){
  //I'll take an input from the user. say 6. I'll run a loop then from 1 to 6(another variable.say a.)there will be an if condition.
  int count=0;
  int n;
  cin >>n;
  for(int a=2;a<n/2;a++){
    if(n%a==0){
      count++;
      break;
    }
    else {
   continue;
    }
  }
 if (count==0) {
      cout << "the given number is prime: "  << endl;
 }
  else {
  cout << "the given number is composite" <<endl;
  } 

  }

