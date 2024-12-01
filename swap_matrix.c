#include<stdio.h>
#include<stdlib.h>
#include<mm_malloc.h>
void swap(int **matrix1, int** matrix2, int size){
    for(int i = 0; i<size; i++){
        for(int j = 0; j < size;j++){
            int tmp = matrix1[i][j];
            matrix1[i][j] = matrix2[i][j];
            matrix2[i][j] = tmp;
        }
    }
}
int print_matrix(int** matrix, int size){
    for(int i = 0; i<size; i++){
        for (int j = 0; j<size; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){   
    int n;
    scanf("%d",&n);
    int** arr1 = malloc(n*sizeof(int*));
    for(int i =0; i<n; i++){
        arr1[i] =malloc(n*sizeof(int));
        for(int j =0; j<n; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    
    int** arr2 = malloc(n * sizeof(int*));
    for(int i = 0; i<n; i++){
        arr2[i] = malloc(n*sizeof(int));
        for(int j = 0; j<n; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n");
    swap(arr1,arr2,n);
    print_matrix(arr1, n);
    printf("\n");
    print_matrix(arr2, n );
    return 0;
}