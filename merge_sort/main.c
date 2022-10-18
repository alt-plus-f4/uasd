#include <stdio.h>
#include <stdlib.h>

#include "merge.h"

int main() {
  int array[] = {8, 6, 5, 4, 3, 2, 1, 0};
  int len = sizeof(array) / sizeof(int);

  puts("\nNOT Sorted array: \n");

  print_array(array, len);

  puts("\nSorted array: \n");

  merge_sort(array, 0, len - 1);
  print_array(array, len);

  return 0;
}

// End of code... enjoy :)