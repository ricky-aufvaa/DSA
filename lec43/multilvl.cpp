#include <iostream>
using namespace std;

class A {
public:
  void speak() { cout << "chal bol" << endl; }
};

class B : public A {};

class C : public B {};

int main() {
  C object;
  object.speak();
}
