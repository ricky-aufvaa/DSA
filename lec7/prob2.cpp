//complement an integer.
//input = 5(101)
//output = 2(010)
#include <iostream>
using namespace std;
#include <iostream>
int main(){
  //observation - input 101. 000000101. ~ . 11111010.  well make a number ,mask=00000111 and it with 11111010 = 00000010(output.).
  int n ;
  cin>>n;
  int mask =0;
  while(n!=0){
    mask= n|1;
   n=n<<1;
   cout<<mask;
  }
}
