/*
    ---1---
    --121--
    -12321-
    1234321

*/
#include <iostream>
using namespace std;
int main(){
int n ;
cin>>n;
//observatioin- i see 3 loops.
  for(int row=1;row<=n;row++){
      int rightcount= row-1;
    for(int j=1;j<=n-row;j++){
                              //this is for left side spaces.
      cout<<" ";
    }
    for(int k=1;k<=row;k++){ //this is for left side numbers.
      cout<<k;
    }
    for(int l=1;l<=row-1;l++){ //this is for right side numbers.
    cout<<rightcount;
    rightcount--;
    }
    cout<<endl;
  }
}
