#include <stdio.h>
#include <stdlib.h>

void print_array(int* array, unsigned int len);
void merge_sort(int array[], int left_index, int right_index);
void kombain(int array[], int left_index, int mid, int right_index);
int* copy_arr_index(int* array, unsigned int start, unsigned int counter);

int main() {
  int array[] = {7, 6, 5, 4, 3, 2, 1};
  int len = sizeof(array) / sizeof(int);

  merge_sort(array, 0, len - 1);

  return 0;
}

void kombain(int array[], int left_index, int mid, int right_index){
    int n1 = mid - left_index + 1, n2 = right_index - mid;
    int i = 0, j = 0, k = left_index;

    int* left_array = (int*)malloc(sizeof(int) * n2);
	int* right_array = (int*)malloc(sizeof(int) * n2);
	left_array = copy_arr_index(array, left_index, n1);
	right_array = copy_arr_index(array, mid + 1, n2); 

	while(i < n1 && j < n2)
		left_array[i] <= right_array[j] ? (array[k++] = left_array[i++]) : (array[k++] = right_array[j++]);

    while (i < n1)
        array[k++] = left_array[i++];

    while (j < n2) 
        array[k++] = right_array[j++];
}
void merge_sort(int array[], int left_index, int right_index){
    if (left_index < right_index) {
        int mid = left_index + (right_index - left_index) / 2;

        merge_sort(array, left_index, mid);
        merge_sort(array, mid + 1, right_index);
 
        kombain(array, left_index, mid, right_index);
    }
}
int* copy_arr_index(int* array, unsigned int start, unsigned int counter){
	int* result = (int*)malloc(sizeof(int) * counter);

	for (int i = 0; i < counter; i++)
        result[i] = array[start + i];

	return result;
}
void print_array(int* array, unsigned int len){
	for (int i = 0; i < len; i++)
    	printf("[%d] %d\n", i, array[i]);
}