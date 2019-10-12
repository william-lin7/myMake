#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "12headers.h"

int main(){
  int arr1[5] = {2, 2, 3, 4, 5};
  printf("Avg of an array: %f\n", avg(arr1, 5));
  int arr2[5] = {6, 7, 8, 9, 10};
  for (int i = 0; i < 5; i++){
    printf("%d\n", arr2[i]);
  }
  copyarr(&arr1, &arr2, 5);
  for (int i = 0; i < 5; i++){
    printf("%d\n", arr2[i]);
  }
  char s[] = "hello world";
  printf("string length: %d\n", stringlength(s));
  return 0;
}
