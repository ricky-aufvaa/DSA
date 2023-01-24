#include <iostream>
using namespace std;

class A {
public:
  void speak() { cout << "bolo A" << endl; }
};

class B {
public:
  void speak() { cout << "bolo B" << endl; }
};

class C : public A, public B {};

int main() {
  C object;
  object.B::speak();
  object.A::speak();
}
