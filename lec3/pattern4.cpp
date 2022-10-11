/* 1 2 3
   4 5 6
   7 8 9*/
#include <iostream>
using namespace std;
int main(){
  //observation- 1. row=column. 2. value in column = 1-9
  int n;
  int count=0;
  cin>>n;
  for(int i =0;i<n;i++){
    for(int j =1 ; j<=n; j++){
      count+=1;
      cout<<count;
    }
    cout<<endl;
  }
}
