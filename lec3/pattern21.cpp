/*
  1111
  222
  33

*/
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i =1;i<=n;i++){
    for(int j=i-1;j<n+1;j++){
      cout<<i;
    }
    cout<<endl;
  }

}
