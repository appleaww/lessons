#include <stdio.h>
#include<string.h>
int main(){
char a[] = "aaertg";
printf("%s",a);
puts(a);//вывод строки
char i[10];
fgets(i,sizeof(i),stdin);//ввод строки
printf("%d",(strlen(a)));
strcat(a,i); //обьединение строк

}