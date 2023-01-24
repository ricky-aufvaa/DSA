#include <iostream>
using namespace std;

class A {
public:
  void speak() { cout << "I am speaking " << endl; }
};

class B : public A {
public:
  void speak() { cout << "I am barking B" << endl; }
};

int main() {

  B object;
  object.speak();
}
