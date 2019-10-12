#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double avg(int *arr, int size){
  double total = 0.0;
  for (int i = 0; i < size; i++){
    total += *(arr + i);
  }
  return total / size;
}

void copyarr(int *arr1, int *arr2, int size1){
  for (int i = 0; i < size1; i++){
    *(arr2 + i) = *(arr1 + i);
  }
}

int stringlength(char *s){
  int length = 0;
  while (*(s + length) != NULL){
    length++;
  }
  return length;
}
