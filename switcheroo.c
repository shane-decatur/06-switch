#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int arr1[10];
  arr1[1] = 0;

  srand( time(NULL) );
  int i;
  for (i = 1; i < 10; i++){
    arr1[i] = rand();
  }

  printf("[");
  for (i = 0; i < 9; i++){
    printf("%d, ",arr1[i]);
  }
  printf("%d]",arr1[9]);
}
