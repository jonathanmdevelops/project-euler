#include <stdio.h>

void main() {
  const short LIMIT = 1000;
  int total = 23;
  short i;
  for(i = 10; i < LIMIT; i++) {
    if(i % 3 == 0 || i % 5 == 0) {
      total += i;
    }
  }
  printf("%d\n", total);
}
