#include <iostream>
using namespace std;

class Dogs {
public:
  int age;
  string name;
  Dogs(int age, string name) {
    this->age = age;
    this->name = name;
  }
};

int main() {
  Dogs obj1(23, "johny");
  Dogs obj2(obj1);
  // dynamically creating an object
  Dogs *obj3 = new Dogs(67, "raju");
  obj2.age = 45;
  cout << obj1.age << endl;
  cout << obj1.name << endl;
  cout << obj2.age << endl;
  cout << obj2.name << endl;
  cout << (*obj3).age << endl;
  cout << (*obj3).name << endl;
}
