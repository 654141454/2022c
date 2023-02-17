#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);

    while(1){
        c=a%b;
        printf("%d %d %d\n",a,b,c);

        if(c==0) break;

        a = b;
        b = c;
    }
    printf("%d", b);
}
