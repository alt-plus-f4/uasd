#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sort.h"

int main() {
  int array[] = {1, 5, 2, 1, 7}, len = (sizeof(array) / sizeof(int));

  bble_sort(array, len);

  print(array, len);

  return 0;
}

// End of code... enjoy :)