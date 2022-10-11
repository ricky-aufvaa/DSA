/* 1
   22
   333
   4444*/
#include <iostream>
using namespace std;
int main(){
  //observation- row=column. 2. column is printing row number.
  int n;
  cin>>n;
  for(int row=1;row<=n;row++){
    for(int col=1;col<=row;col++){
      cout<<row;
    }
    cout<<endl;
  }
}
