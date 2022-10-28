#include <stdio.h>
int main()
{

        printf("要判斷你輸入的數字是不是很孤獨的質數:");
        int n;
        scanf("%d",&n);

        int bad=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)bad=1;
        }
        if(bad==0)printf("%d 是質數(沒有壞掉)",n);
        else printf("%d 不是質數(早就壞掉了)",n);
}
