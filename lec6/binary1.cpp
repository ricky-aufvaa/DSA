//convert a decimal number to binary.
#include <iostream>
using namespace std;
int main(){
  //say the number is 10(1010); 10/2 =5 , rem = 0; 5/2=2; rem =1 ; 2/2=1,rem =0; 1/2=0, rem=1; (rem = 0101)
  //therefore binary of a decimal is reverse of rem.
  int q;
  cin>>q;
  //int bit;
  int r;
  while(q!=0){
    r = q%2;
    //bit=r&1;
    q/=2;
    cout<<r;
  }
  return 0;
}
