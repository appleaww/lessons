#include <stdio.h>
#include <mm_malloc.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int** arr = (int**)malloc(n* sizeof(int*));
    for(int i = 0; i<n; i++){
        arr[i] = (int*)malloc((i+1) * sizeof(int));
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1;j++){
                scanf("%d", &arr[i][j]);
            }
    } 
    printf("\n");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1;j++){
                printf("%d ", arr[i][j]);
            }
        printf("\n");
    }  
    

    return 0;
}