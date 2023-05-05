#include "headers/stack.h"
#include <iostream>

using namespace std;

int main() {
  emeraldstack emstack;
  emstack.data[3] = 7;
  emstack.data[6] = 5;
  emstack.data[9] = 19;
  cout << emstack.pop() << "\n";
}
