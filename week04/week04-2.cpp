#include <stdio.h>
int main()
{
    int a=10;
    printf("a在哪裡? %d\n",&a);

    int *p=&a;

    printf("指標p心理放的值是&a 也就是%d",p);
    printf("p指到的那一個盒子的值是:%d\n",*p);
}
