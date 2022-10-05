#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sort.h"

int main() {
  int *arr = rng_arr(arr, 5); // New array
  int len = 5;

  bble_sort(arr, len);
  print(arr, len);
  
  free(arr);
  arr = rng_arr(arr, len); // New array

  bble_sort_v2(arr, len);
  print(arr, len);

  free(arr);
  arr = rng_arr(arr, len); // New array

  merge_sort(arr, len);
  print(arr, len);

  free(arr);

  return 0;
}
// End of code... enjoy :)