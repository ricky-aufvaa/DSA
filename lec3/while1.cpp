//sum of n integers.
#include <iostream>
using namespace std;
int main()
{
int sum=0;
int a;
cin >>a;
int n=1;
while (n<=a) {
  sum=sum+n;
  n=n+1;
}
cout << "The sum of the : " << a <<"  numbers is"<<sum<< endl;
}
