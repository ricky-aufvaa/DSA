#include <iostream>
using namespace std;

class human {
public:
  int age;
  char colour;

  int getAge() { return this->age; }
  void setAge(int a) { this->age = a; }
};

class humanKid : public human {
public:
  string name;
  void sleep() { cout << "I am sleeping" << endl; }
};

int main() {
  humanKid object1;
  object1.setAge(23);
  cout << object1.age << endl;
  object1.sleep();
}
