#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main() {
  struct dble_list *list = innit();

  list = push_back(list, 10);
  list = push_back(list, 5);
  list = push_back(list, 69);
  list = push_back(list, 42);

  print_list(list);

  return 0;
}

// End of code... enjoy :)