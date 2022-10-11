/*A
  BC
  DEF
  GHIJ*/
#include <iostream>
using namespace std;
int main(){
  //observation - col=rownumebr. 2. counting.
  int n;
  cin>>n;
  char ch='A';
  for(int i =1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<ch;
        ch++;
      }
    cout<<endl;
    }
}
