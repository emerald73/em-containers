#include "headers/stack.h"
#include <iostream>

using namespace std;

int main() {
  emeraldstack emstack;
  emstack.data[3] = 7;
  cout << emstack.pop() << "\n";
}
