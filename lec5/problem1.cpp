//Subtract the Product and Sum of Digits of an Integer
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int b=1;
  int product=1;
  int sum=0;
  while(n!=0){
    int a=n%10;
    product=product*a;
    sum=sum+a;
    n=n/10;
  }
  cout << product -sum;
}
