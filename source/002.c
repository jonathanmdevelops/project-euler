#include <stdio.h>

void main() {
  const int LIMIT = 4000000;
  int lowerTerm = 1;
  int higherTerm = 2;
  int total = 0;
  int temp;

  do {
    if(higherTerm % 2 == 0) {
      total += higherTerm;
    }
    temp = higherTerm;
    higherTerm = lowerTerm + higherTerm;
    lowerTerm = temp;
  } while(higherTerm <= LIMIT);

  printf("%d\n", total);

}
