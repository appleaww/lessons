#include <stdio.h>
#include <string.h>
struct people{
    int age;
    char name;

};

typedef struct House{
    struct people p10;
    int hight;
    float cost;
} lala;

int main(){
    lala home;   //lala == struct House
    home.hight = 20;
    home.cost = 100000.5;
    
    struct House home2;
    home2.hight = 30;
    home2.cost = 1.3;
    int s  = home.hight - home2.hight;
    

    struct people p1;
    p1.age  = 10;
    p1.name = 'a';

    struct people p2;
    p2.age = 29;
    p2.name = 'h';
    
    struct people p3 ={13,'A' };
   
    struct House t ={39, 5.4};
    
    struct House p;
    p.p10.age = 10;
    p.p10.name = 'a';

    struct House fo =  {{12, 'd'},1231,2.5};

    
    return 0;
}