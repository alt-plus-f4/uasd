#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sort.h"

void bble_sort(int *arr, unsigned int len) {
  puts("Bubble sort start");

  int has_swaped = 1;

  while (has_swaped) {
    has_swaped = 0;

    for (int i = 0; i < len; i++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        has_swaped++;
      }
    }
  }
  puts("Bubble sort end");
}

void bble_sort_v2(int *arr, unsigned int size) {
  puts("Bubble sort v2 start");

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      printf("compare arr[%d]=%d with arr[%d]=%d\n", i, arr[i], j, arr[j]);

      if (arr[i] > arr[j]) {
        printf("swap %d with %d\n", arr[i], arr[j]);

        swap(arr + i, arr + j);
      }
    }
  }

  puts("Bubble sort v2 end");
}

void merge_sort(int *arr, unsigned int size) {
  puts("Merge sort start");

  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 5; j++) {
      printf("compare %d with %d\n", arr[i], arr[j]);
      if (arr[i] > arr[j]) {
        printf("swap %d with %d\n", arr[i], arr[j]);
        swap(arr + i, arr + j);
      }
    }
  }
  for (int i = 5; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
      printf("compare %d with %d\n", arr[i], arr[j]);
      if (arr[i] > arr[j]) {
        printf("swap %d with %d\n", arr[i], arr[j]);
        swap(arr + i, arr + j);
      }
    }
  }
  puts("Merge sort end");
}

int random_int() {  
  	srand(time(NULL));
  	return (rand() % 100);
}

int *rng_arr(int *arr, int len) {
  	arr = (int*)malloc(sizeof(int) * len);
    
	for (int i = 0; i < len; i++)
		arr[i] = random_int();

 	return arr;
}

void print(int *arr, int len) {
  for (int i = 0; i < len; i++)
    printf("[%d] %d\n", i, arr[i]);
}

void swap(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

// End of code... enjoy :)