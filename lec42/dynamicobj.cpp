#include <iostream>
using namespace std;

class Hero {
public:
  int health = 100;
  char level = 'A';
};

int main() {
  // statically creating an object
  Hero a;
  cout << a.health << endl;
  cout << a.level << endl;
  // dynamically creating an object
  Hero *b = new Hero;
  // cout << (*b).health<<endl;
  // cout << (*b).level<<endl;
  cout << b->health << endl;
  cout << b->level << endl;
}
