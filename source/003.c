#include <stdio.h>
#include <math.h>
#include "prime.h"

void main() {
  const long NUMBER = 600851475143;
  long largestPrimeFactor = 0;
  long i;

  for(i = 2; i < sqrt(NUMBER); i++) {
    if(NUMBER % i == 0 && isPrime(i) == 0) {
      largestPrimeFactor = i;
    }
  }
  printf("%d\n", largestPrimeFactor);
}
