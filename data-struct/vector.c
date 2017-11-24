#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void vector_init(Vector *vector){
	//init size and capacity
	vector -> size = 0;
	vector -> capacity = VECTOR_INITIAL_CAPACITY;
	
	//allocat space for vector -> data
	vector -> data =  malloc(sizeof(int) * vector -> capacity);
}

void vector_append(Vector *vector, int value){
	//checking for space
	vector_double_capacity_if_full(vector);
	//append value and increment the vectors size
	vector -> data[vector -> size++] = value;
}

int vector_get(Vector *vector,int index){
	
	if(index >= vector->size || index < 0 ){
		printf("Index %d out of bounds for a vector of size %d\n", index, vector -> size);
		exit(1);
	}
	return vector->data[index];
	
}

void vector_set(Vector *vector, int index, int value) {
  // zero fill the vector up to the desired index
  while (index >= vector->size) {
    vector_append(vector, 0);
  }

  // set the value at the desired index
  vector->data[index] = value;
}


void vector_double_capacity_if_full(Vector *vector) {
  if (vector->size >= vector->capacity) {
    // double vector->capacity and resize the allocated memory accordingly
    vector->capacity *= 2;
    vector->data = realloc(vector->data, sizeof(int) * vector->capacity);
  }
}

void vector_free(Vector *vector) {
  free(vector->data);
}

