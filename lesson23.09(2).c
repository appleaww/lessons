#include <stdio.h>
int main() {
    int a;
    int m=0;
    int n=0;
    scanf("%d", &a);
    m = a%10+a%100/10+a%1000/100;
    n = a%10000/1000+a%100000/10000+a%1000000/100000;
    if (m==n && (a>0) && (a/10!=0) && (a/10000000==0)){
        printf("Билет счачтливый");

    }
    else {
        printf("Билет не счачтливый");

    }
    return 0;
}
