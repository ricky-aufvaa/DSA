#include <iostream>
using namespace std;

void reachHome(int source, int destination) {
  if (source == destination) {
    cout << "reached" << endl;
    return;
  }
  cout << "source -- " << source << "--- destination--" << destination << endl;
  source++;
  reachHome(source, destination);
}

int main() {
  int destination = 10;
  int source = 1;
  reachHome(source, destination);
}
