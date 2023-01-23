#include <iostream>
using namespace std;

class Hero {
public:
  int health;
  char level;

  // parameterised constructor
  Hero(int h, char l) {
    this->health = h;
    this->level = l;
  }
};

int main() {
  Hero suresh(70, 'A');
  cout << suresh.health << endl;
  cout << suresh.level << endl;

  Hero ramesh(suresh);
  cout << ramesh.health << endl;
  cout << ramesh.level << endl;
}
