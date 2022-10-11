/*A
  BB
  CCC*/

#include <iostream>
using namespace std;
int main(){
  //observation- col=rownumber. 2. A+Row-1.
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    char ch= 'A'+i-1;
      cout<<ch;
    }
  cout<<endl;
  }
}
