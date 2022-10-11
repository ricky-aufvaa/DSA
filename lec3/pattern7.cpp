/* 1
   23
   456
   78910
   */
#include <iostream>
using namespace std;
int main(){
  //obesrvation- row !=col. 2. number of cols = row number.
  int n;
  cin>>n;
  int count = 1;
  for(int row=1;row<=n;row++){
    for(int col=1;col<=row;col++){
      cout<<count;
      count = count+1;
    }
    cout<<endl;
  }

}
