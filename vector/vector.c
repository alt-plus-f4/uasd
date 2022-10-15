// Implementation of them
#include <stdlib.h>
#include <stdio.h>

#include "vector.h"

struct Vector* init(){
    struct Vector* vector = (struct Vector*)malloc(sizeof(struct Vector*));
    vector->size = 0;
    vector->capacity = 1;
    vector->data = (int*)malloc(sizeof(int));
    return vector; 
}
void print_data(struct Vector vector){
    if(vector.size == 0){
        printf("Vector empty\n");
        return;
    }

    printf("Vector Data: ");

    for(int i = 0; i < vector.size; i++)
        printf("%d ", vector.data[i]);
}
void resize(struct Vector* vector){
    vector->capacity *= 2;
    vector->data = (int*)realloc(vector->data, vector->capacity * sizeof(int));
}
void remove_back(struct Vector* vector){
    if(is_empty(*vector))
        return;

    vector->data[vector->size - 1] = 0;
    vector->size -= 1;
}
void insert(struct Vector* vector, int value){

    if(is_full(*vector))
        resize(vector);

    vector->data[vector->size] = value;
    vector->size += 1;
}
void insert_at_index(struct Vector* vector, int index, int value){
    if(index > vector->size || index < 0){
        printf("Invalid index\n");
        return;
    }

    int* temp = (int*)malloc(sizeof(int) * (vector->size + 1));
    vector->size += 1;

    for(int main_counter = 0, temp_counter = 0; main_counter < vector->size; main_counter++, temp_counter++){
        if(main_counter == index){
            temp[temp_counter] = value;
            temp_counter++;
        }
        temp[temp_counter] = vector->data[main_counter];
    }

    if(is_full(*vector))
        resize(vector);

    for(int i = 0; i < vector->size; i++){
        vector->data[i] = temp[i];
    }
}
void remove_at_index(struct Vector* vector, int index){
    if(index > vector->size || index < 0){
        printf("Invalid index\n");
        return;
    }

    if(is_empty(*vector)){
        printf("Not Enough elements\n");
        return;
    }

    int* temp = (int*)malloc(sizeof(int) * (vector->size - 1));
    // vector->size -= 1;

    for(int main_counter = 0, temp_counter = 0; main_counter < vector->size; main_counter++, temp_counter++){
        if(main_counter == index)
            main_counter++;

        temp[temp_counter] = vector->data[main_counter];

    }

    vector->size -= 1;

    for(int i = 0; i < vector->size; i++){
        vector->data[i] = temp[i];
    }
}
void clear(struct Vector* vector){
    for(int i = 0; i < vector->size; i++)
        vector->data[i] = 0;
}
void destroy(struct Vector* vector){
    for(int i = 0; i < vector->size; i++)
        vector->data[i] = 0;
    free(vector->data);
    free(vector);
}
struct Vector* merge(struct Vector* vector_1, struct Vector* vector_2){
    int sizeofvect = vector_1->size + vector_2->size;
    struct Vector* mrg_vector = init();

    while(mrg_vector->capacity < sizeofvect)
        resize(mrg_vector);

    for(int i = 0; i < vector_1->size; i++)
        mrg_vector->data[i] = vector_1->data[i];

    for(int i = vector_1->size; i < sizeofvect; i++)
        mrg_vector->data[i] = vector_2->data[i];

    return mrg_vector;

}
int get_value_by_index(struct Vector* vector, int index){
    if(index > vector->size - 1)
        return -1;
    return vector->data[index];
}
int is_full(struct Vector vector){
    return vector.size == vector.capacity;
}
int is_empty(struct Vector vector){
    return vector.size == 0;
}
