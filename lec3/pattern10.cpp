/*AAA
  BBB
  CCC
  */

#include <iostream>
using namespace std;

int main(){
  int n;
  cin>> n;
  char alphabet='A';
  for(int row=1;row<=n;row++){
    for(int col=1;col<=n;col++){
      cout<<alphabet;

    }
    alphabet++;
    cout<<endl;
  }
}
