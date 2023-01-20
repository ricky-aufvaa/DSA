#include <iostream>
using namespace std;

class Hero {
public:
  int health;
  char level;

  // constructor
  Hero(int health) {
    this->health = health;
    this->health++;
    cout << health;
  }
};

int main() {
  Hero object(10);
  cout << object.health;
}
