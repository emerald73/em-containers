#ifndef _STACK_H_
#define _STACK_H_
#include <iostream>

using namespace std;

#define limit 10

class emeraldstack {
  public:
    int data[limit] = {};

    int pop() {
      int value = limit - 1;
      while (data[value] == 0) {
        value--;
      }
      int latest = data[value];
      data[value] = 0;
      return(latest);
    }
};

#endif
