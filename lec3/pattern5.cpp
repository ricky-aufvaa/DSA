/*  *
    **
    ***
    ****
    */

#include <iostream>
using namespace std;
int main(){
  //observation - row=column. 2. column is printing the row number.
  int n;
  cin>> n;
  for(int i =1;i<=n;i++){
    for(int j =1; j<=i;j++){
      cout<<"*";
      
    }
    cout<<endl;
  }
}
