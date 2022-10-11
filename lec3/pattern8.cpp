/* 1
   23
   345
   4567
   */
#include <iostream>
using namespace std;
int main(){
  //observation - row !=col. 2.  
  int n;
  cin>>n;
  int row=1;

  while(row<=n){
    int count = row;
    for(int col=1;col<=row;col++){
        cout<<count;
    count=count+1;
    }
    cout<<endl;
    row++;
  }

}
