#include "headers/stack.h"
#include <iostream>

using namespace std;

int main() {
  emeraldstack emstack;

  emstack.push(24);
  emstack.push(23);
  emstack.push(46);

  cout << emstack.size();

 }
