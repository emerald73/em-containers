#ifndef _STACK_H_
#define _STACK_H_
#include <iostream>
#include <array>

using namespace std;

#define limit 10

class emeraldstack {
  private:
    int data[limit] = {};

  public:

    int latestPos() {
      int value = limit - 1;
      while (data[value] == 0 && value >= 0) {
        value--;
      }
      return(value);
    }

    int peek() {
      int value = latestPos();
      if (value < 0) {
        cout << "No data in stack!\n\n";
        return 0;
      } else {
        return(data[value]);
      }
    }

    int pop() {
      int value = latestPos();
      if (value < 0) {
        cout << "No data in stack!\n\n";
        return 0;
      } else {
        int latest = data[value];
        data[value] = 0;
        return(latest);
      }
    }

    int push(int val) {
      int pos = latestPos();
      if (pos < 0) {
        pos = -1;
      }
      if (pos < limit) {
        pos = pos + 1;
        data[pos] = val;
      }
      return(val);
    }

    string isFull() {
      int pos = limit - 1;
      if (data[pos] != 0) {
        return("true");
      } else {
        return("false");
      }
    }

    string isEmpty() {
      if (data[0] == 0) {
        return("true");
      } else {
        return("false");
      }
    }

    string search(int query) {
      string isTrue;
      for (int i = 0; i < limit; i++) {
        if (data[i] == query) {
          isTrue = "true";
          break;
        } else {
          isTrue = "false";
        }
      }
      return(isTrue);
    }
};

#endif
