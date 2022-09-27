#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main() {
  struct list_node_t *list = NULL;

  list = push_back(list, 10);  //
  list = push_back(list, 15);  //
  list = push_back(list, 69);  //
  list = push_back(list, 150); //

  print_list(list);

  contains(list, 15) ? printf("Found\n") : printf("Not found\n");
  printf("%d\n", get_size(list));

  list = pop_front(list);
  list = pop_back(list);

  print_list(list);
  printf("\nInsert\n");

  list = insert(list, 42, 0);
  print_list(list);
  printf("\nRemove\n");

  remove_item(list, 2);
  print_list(list);
  printf("\n");


  return 0;
}

// End of code... enjoy :)