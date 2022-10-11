/*

 ****
 ***
 **
 *

*/

#include <iostream>
using namespace std;
int main(){
  //observation- no. of col= n-i+1

int n;
cin>>n;
for(int i=1;i<=n;i++){
  for(int j=1;j<=n-i+1;j++){
    cout<<"*";
  }
  cout<<endl;
}
}
