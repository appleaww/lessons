#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num%3==0) {
        printf("Число делится на 3");
    }
    else{
        printf("Число не делится на 3");
    }
   
   return 0;
}