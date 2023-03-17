#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=a;
    for(int i=0;i<10;i++){
        printf("a[i]:%d -- p[i]:%d\n",a[i],p[i]);
    }
}
