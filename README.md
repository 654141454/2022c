# 2022c
資傳一甲 程式設計 的程式倉庫

#week01
放假(中秋節)

#week02


#week06
## step01-0_
考試九九乘法表,考前複習、考後檢討同學出錯的狀況
```cpp
#include <stdio.h>
int main()
{
	for(int a=1;a<=9;a++)
{
	for(int b=1;b<=9;b++)
	{
		printf("%d*%d=%2d ",b,a,a*b);
	}
	printf("\n");
	}
}
```
##step01-1_畫星星-金字塔
使用的技巧,是先用左手1來製作鷹架
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int star= i*2-1;
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
```
##step01-2_金字塔
有了鷹架樓層,接下來便是決定第i樓有幾個space空格、有幾個star星星。找到規律,便能寫出公式,並利用迴圈基礎型,輕鬆把星星畫出來。
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int star= i*2-1;
        for(int k=0; k<star; k++){
            printf("*");
        }
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
```
##step02-1_想要分數約分,可以使用暴力法,去找到都整除的數字,就能約分了
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數");
    int a,b, ans;
    scanf("%d %d",&a,&b);
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d",ans);
}
```
##step02-2_介紹輾轉相除法
```cpp
#include <stdio.h>
int main()
{

        printf("請輸入2個數字:");
        int a,b,c;
        scanf("%d %d",&a,&b);
        while(1){
            c = a%b;
            printf("a:%d b:%d c:%d\n",a,b,c);
            if(c==0)break;
            a=b;
            b=c;
        }
        printf("中的事:%d",b);
}
```
