#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sort.h"

void bble_sort(int *arr, unsigned int len) {
  int has_swaped = 1;

  while (has_swaped) {
    has_swaped = 0;

    for (int i = 0; i < len - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        swap(&arr[i], &arr[i + 1]);
        has_swaped++;
      }
    }
  }
  puts("\nBubble sort:\n");
}

void bble_sort_v2(int *arr, unsigned int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] > arr[j]) 
        swap(arr + i, arr + j);
    }
  }

  puts("\nBubble sort v2 end:\n");
}

void merge_sort(int *arr, unsigned int size) {
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (arr[i] > arr[j])
        swap(arr + i, arr + j);
    }
  }
  for (int i = 5; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (arr[i] > arr[j])
        swap(arr + i, arr + j);
    }
  }
  puts("\nMerge sort end:\n");
}

void quick_sort(int* arr, unsigned int len){
  int pivot_index = len / 2;

  for(int i = 0; i < pivot_index; i++){
    if(arr[i] > arr[pivot_index]){
      puts("move");
    }
  }
  
  puts("\nQuick Sort end\n");
}

int* rng_arr(int *arr, unsigned int len) {
  	arr = (int*)calloc(sizeof(int), len);
  	srand(2);
    
    for (int i = 0; i < len; i++)
      arr[i] = random_int();

 	  return arr;
}

void print(int *arr, unsigned int len) {
  for (int i = 0; i < len; i++)
    printf("[%d] %d\n", i, arr[i]);
}

void swap(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

int random_int() {  
  	return (rand() % 100);
}


// End of code... enjoy :)