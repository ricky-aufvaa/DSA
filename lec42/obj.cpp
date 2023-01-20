#include <iostream>
using namespace std;

class Hero {
  // properties
  int health;
  int level;
};

int main() {
  Hero h1;
  cout << sizeof(h1);
}
