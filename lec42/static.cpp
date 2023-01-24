#include <iostream>
using namespace std;

class Hero {
public:
  static int health;
  char level;
};

int Hero::health = 5;

int main() { cout << Hero::health; }
