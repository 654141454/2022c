///兩數想交換,口訣:temp=a;a=b;b=temp;
#include <stdio.h>
int main()
{
    int a=90,b=80;
    printf("a:%d b:%d\n",a,b);

    int temp= a;
    a = b;
    b = temp;

    printf("a:%d b:%d\n",a,b);
}
