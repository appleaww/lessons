#include <stdio.h>
#include <stdlib.h>

#include "mm_malloc.h"


int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int** arr  = (int**)calloc(m, sizeof(int*));
    for (int i =0 ; i<n; i++){
        arr[i] = (int*)calloc(n,sizeof(int));
    }
   
    for(int m =0 ; m<4; m++){
        for(int n = 0; n<4; n++){
            scanf("%d", &arr[m][n]);
        }
    }
    int min_el = 100000000000;
    int max_el  =-10000000000;
    
    for(int m =0 ; m<4; m++){
        for(int n = 0; n<4; n++){
            if(arr[m][n] < min_el){
                min_el = arr[m][n];
            }
            if(arr[m][n] > max_el){
                max_el = arr[m][n];
            }
        }
    }

    for (int i= 0 ;i<n;i++){
        free(arr[i]);
    }
    free(arr);
    printf("%d %d", min_el, max_el);
    return 0;
}