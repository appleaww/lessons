#include <stdio.h>
#include <stdlib.h>
#include "mm_malloc.h"
int main() {
    int size;
    scanf("%d", &size);
    int* arr  = (int*)malloc(size * sizeof(int));
    int* arr  = (int*)calloc(size, sizeof(int));
    arr[0] = 123;
    free(arr);
return 0;
}