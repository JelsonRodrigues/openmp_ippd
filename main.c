#include "src/include/fibonacci.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int32_t main() {

  uint8_t n = 0;
  if (scanf("%hhd", &n) == 0) {
    printf("ERROR reading n Value\n");
  }

  printf("FIBO: %hhd = %ld\n", n, run_parallel_fibonacci(n));
  return EXIT_SUCCESS;
}