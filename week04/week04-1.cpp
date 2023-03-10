#include <stdio.h>
int main()
{
        int a=10;
        printf("a的值是%d\n",a);
        printf("a的家在%d\n", &a);

        int b=20;
        printf("b的值是%d\n", b);
        printf("b的家在%d\n", &b);

        int c=30;
        printf("c的值是%d\n", c);
        printf("c的家在%d\n", &c);
}
