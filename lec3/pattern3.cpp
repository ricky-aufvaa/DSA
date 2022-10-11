/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4 */

#include <iostream>
using namespace std;
int main(){
  //observations- 1. no. of rows=no.of columns. 2. value in column = no. of that column
  int n;
  cin>> n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<j;
    }
    cout<<endl;
  }

}
