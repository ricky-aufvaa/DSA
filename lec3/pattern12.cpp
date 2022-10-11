/* ABC
   DEF
   GHI
*/

#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
char alpha='A';
for(int row=1;row<=n;row++){
  for(int col=1;col<=n;col++){
    cout<<alpha;
    alpha++;
    
  }
  cout<<endl;
}
}
