#include "prime.h"
#include <math.h>
#include <stdio.h>

char isPrime(long n) {
  long i; 
  for(i = 2; i <= sqrt(n) + 1; i++) {
    if(n % i == 0) {
      return 1;
    }
  }
  return 0;
}
