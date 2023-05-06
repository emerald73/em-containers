#ifndef _RINGBUFFER_H_
#define _RINGBUFFER_H_

#include <iostream>

using namespace std;

#define buffer_size 10

class emeraldRingBuffer {
  private:
    int buffer[buffer_size] = {};
    int head = 0;
  public:

    int size() {
      int len = 0;
      for (int i = 0; i < buffer_size; i++) {
        if (buffer[i] != 0) {
          len++;
        }
      }
      return(len);
    }

    void addValue(int value) {
      buffer[head++] = value;
      if (head >= buffer_size) {
        head = 0;
      }
    }

    int getAverage() {
      int sum = 0;
      for (int i = 0; i < buffer_size; i++) {
        sum += buffer[i];
      }
      return(sum/size());
    }

    int getMode() {
      int mode = 0;
      int maxCount = 0;
      for (int i = 0; i < buffer_size; i++) {
        int currentValue = buffer[i];
        int currentCount = 0;
        for (int j = 0; j < buffer_size; j++) {
          if (buffer[j] == currentValue) {
            currentCount++;
          }
        }
        if (currentCount > maxCount) {
          maxCount = currentCount;
          mode = currentValue;
        }
      }
      return(mode);
    }

    int readValue(int value) {
      if (value <= buffer_size) {
        return(buffer[value-1]);
      } else {
        cout << "Value exceeds max size!\n";
        return(0);
      }
    }
};

#endif
