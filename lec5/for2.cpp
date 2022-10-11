//fibonacci series.
//011235...
#include <iostream>
using namespace std;
int main(){
  //observation - last 2 digit's sum is the present digit.
  int n;
  cin>>n;
  int a=0;
  int b =1;
  cout<< a<< " "<<b<<" ";
  for(int i=0,next=0;i<n;i++){
    next=a+b;
    a=b;
    b=next;
    cout<<next<<" ";
    
  } 

}
