#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

void bble_sort(int* arr, int len){
	int has_swaped = 1;

  	while(has_swaped){
		has_swaped = 0;

		for(int i = 0; i < len; i++){
		if(arr[i] > arr[i + 1]){
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			has_swaped++;
		}
		}
  	}
}

void print(int* arr, int len){
	for(int i = 0; i < len; i++)
    	printf("[%d] %d\n", i, arr[i]);
}

// End of code... enjoy :)