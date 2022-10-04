#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sort.h"

int main() {
  int *arr = rng_arr(arr, 5);
  int len = (sizeof(arr) / sizeof(int));

  print(arr, len);

  bble_sort(arr, len);
  print(arr, len);

  arr = rng_arr(arr, len);
  print(arr, len);
  bble_sort_v2(arr, len);
  print(arr, len);

  arr = rng_arr(arr, len);
  print(arr, len);
  merge_sort(arr, len);
  print(arr, len);

  return 0;
}
// End of code... enjoy :)