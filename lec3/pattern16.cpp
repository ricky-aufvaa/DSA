/*A
  BC
  CDE
  DEFG
  */

#include <iostream>
using namespace std;
int main(){
  //observation- col=rownumebr. 2. A+row+col-2.
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      char ch= 'A'+i+j-2;
      cout<<ch;
    }
    cout<<endl;
  }
}
