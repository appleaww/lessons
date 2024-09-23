#include <stdio.h>
int main() {
    int num;
    int k =0;
    scanf("%d",&num);
    if (num/10%2==0)
    k++;
    if (num/100%2==0)
    k++;
    if (num/1000%2==0)
    k++;
    if (num/10000%2==0)
    k++;
    printf("%d", k);
   
    return 0;
}