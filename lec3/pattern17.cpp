/*D
  CD
  BCD
  ABCD
  */

#include <iostream>
using namespace std;
int main(){
  //observation- col=rownumber. 2. A+n-row;
  int n ;
  cin>>n;
  for(int i=1;i<=n;i++){
    char ch = 'A'+n-i;
    for(int j=1;j<=i;j++){
      cout<<ch;
      ch++;
    }
    cout<<endl;
  }
}
