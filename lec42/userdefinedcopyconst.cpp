#include <iostream>
using namespace std;
class Hero {
public:
  int health;
  char level;

  // parametarised constructor
  Hero(int h, char l) {
    this->health = h;
    this->level = l;
  }

  // copy constructor
  Hero(Hero &temp) {
    this->health = temp.health;
    this->level = temp.level;
  }
};

int main() {
  Hero suresh(70, 'a');
  Hero ramesh(suresh);
  cout << ramesh.level << endl;
  cout << ramesh.health << endl;
}
