/* 1
   23
   345
   4567
   */

#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int row=1;row<=n;row++){
    for(int col=1;col<=row;col++){
      cout<<row+col-1;   
    }
    cout<<endl;
  }
}
