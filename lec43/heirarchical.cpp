#include <iostream>
using namespace std;

class A {
public:
  void speak() { cout << "ab bolo bhai" << endl; }
};

class B : public A {};
class C : public A {};

int main() {
  B object;
  object.speak();
}
