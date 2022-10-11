//find sum of n even integers.
#include <iostream>
using namespace std;
int main(){
 int sum=0;
 int n=0;
 int a;
 cin >>a;
 while (n<=a) {
    sum=sum+n;
    n=n+2;
 }
 cout << "the sum of : " << a << "integers is  "<<sum << endl;

}
