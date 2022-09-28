#include <stdio.h>
// #include <stdlib.h>

#include "vector.h"

int main() {
  struct Vector* vector = init();

  printf("%d\n", vector->capacity);

  insert(vector, 5);
  printf("%d\n", vector->data[0]);
  printf("%d\n", vector->capacity);

  insert(vector, 10);
  printf("%d\n", vector->data[1]);
  printf("%d\n", vector->capacity);

  remove_back(vector);

  print_data(*vector);
  printf("\n");

  insert(vector, 69);
  insert(vector, 420);
  
  print_data(*vector);
  printf("\n");

  remove_back(vector);

  print_data(*vector);
  printf("\nRN\n");

  printf("%d\n", get_value_by_index(vector, 0));

  insert_at_index(vector, 1, 1337);
  print_data(*vector);
  printf("\nRemove\n");

  remove_at_index(vector, 0);
  print_data(*vector);
  printf("\n");

  return 0;
}

// End of code... enjoy :)