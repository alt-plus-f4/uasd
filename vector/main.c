#include <stdio.h>
// #include <stdlib.h>

#include "vector.h"

int main() {
  struct Vector* vector = init();
  struct Vector* vector_2 = init();

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

  clear(vector);
  print_data(*vector);

  destroy(vector);
  // print_data(*vector); random s*values*hit

  vector = init();

  insert(vector_2, 10);
  insert(vector_2, 11);
  insert(vector_2, 22);

  print_data(*vector_2);

  vector = merge(vector, vector_2);

  print_data(*vector);

  return 0;
}

// End of code... enjoy :)