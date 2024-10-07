#include <stdio.h>
int main() {
    int arr[10];
    
 
    for(int i = 0; i<10; i++){
         scanf("%d", &arr[i]);
    }
    int chet = 0;
    int ne_chet =0;
    for (int a =0; a<10;a++) {
        if (arr[a] %2 == 0) {
            chet ++;
        }
        else{
            ne_chet ++;
        }
    }  
    printf("%d %d", chet, ne_chet);

    
    return 0;
}