#include <iostream>
using namespace std;

class Hero { // base class
public:
  int level;

private:
  int health;
};

// child class
class Son : public Hero {
  void print() { cout << "inherit ho gya lagta hai" << endl; }
};

int main() {
  Son object;
  object.level = 5;
  cout << object.level << endl;

  object.health = 10;
  cout << object.health << endl;
}
