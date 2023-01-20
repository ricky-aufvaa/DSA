#include <iostream>
using namespace std;
class Hero {
public:
  int health = 100;
  string level = "sarabjot";
};
int main() {
  Hero object;
  object.health++;
  cout << object.health << endl;
}
