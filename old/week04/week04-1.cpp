#include <stdio.h>
int main()
{
    printf("請輸入西元年");
    int n;
    scanf("%d",&n);
    if(n%400==0) printf("閏年");
    else if(n%100==0) printf("普通年/平年");
    else if(n%4==0) printf("閏年");
    else printf("普通年/平年");
}
