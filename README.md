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
step01-1實習講解
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=n;k++)
		{
			if(k<=n-i)printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}
```
step02-1 實習講解
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int i=1;
	while(i<=n)
	{
		int k=1;
		while(k<=n)
		{
			if(k<=n-i)printf(" ");
			else printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}
```
step02-2質數判斷
```cpp
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
```
step02-3很多質數
```cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	
	for(int n=2;n<=a;n++)
	{
		int bad=0;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)bad=1;
		}
		if(bad==0) printf("%d ",n);
	}
}
```
step1陣列array,照著課本練習陣列宣告、陣列宣告順便給值、把值拿出來用。
```cpp
#include <stdio.h>
int main()
{
        int a[4]={10,20,30,40};
        printf("a[0]:%d\n",a[0] );
        printf("a[1]:%d\n",a[1] );
        printf("a[2]:%d\n",a[2] );
        printf("a[3]:%d\n",a[3] );
}
```
step02-1_陣列很有用, 像找質數時, 可以用篩子法快速把全部質數找出來。
```cpp
#include <stdio.h>
int main()
{
    int a[4]{10,20,30,40};
        ///i:0 1 2 3
    for(int i=0;i<4;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
        ///i:3 2 1 0
    for(int i=3;i>=0;i--){ ///倒過來迴圈
        printf("%d ",a[i]);
    }
}
```
step01-1_想要將3個數字從小到大排好時,我們需要一個技巧-交換, 老師用瓶子裡面裝 a=90咖啡, b=80清水,做示範, 需要另一個臨時的空瓶 temp 幫忙。
```cpp
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
```
step01-2_有了前面的交換,便能試試三數排序的部分,使用的口訣是「比大小,不對就交換」, 先把 a b 比, 再把 b c 比, 最重的已經沉到最下面, 所以再加上 a b 比, 就可從小到大排好了。
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80,c=70;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp=b;
        b=c;
        c=temp;
    }
    ///把最重要的放到c,剩下 上面的ab在比一次
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d",a,b,c);
}
```
 step02-1_其實第4週實習課有教過「3數排序」,那時候就用了6個if(判斷),雖然簡單,但很多重複的程式碼。
 ```cpp
#include <stdio.h>

int a[10]={90, 80 , 70 , 60 , 50 , 40 , 30 , 20 , 10 , 0 };

int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i] );
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");
}
```
step02-2_前面的程式,只把「最肥的數字」移到右邊,因此,我們就用 Ctrl-C 的方法 貼很多次, 並逐一印出來,觀察它的變化,越排越多都排好了。
```cpp
#include <stdio.h>

int a[10]={90, 80 , 70 , 60 , 50 , 40 , 30 , 20 , 10 , 0 };

int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i] );
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");
      for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");
      for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ",a[i]);
    printf("\n");
}
```
 step03-1_泡泡排序法,其實就是把剛剛的程式,重覆做很多次。因為是重覆的程式碼, 所以不需要 Ctrl-C 來複製, 而是直接用 for(int k=0; k小於「重覆的次數」; k++){ } 來重覆做。就這樣完成了泡泡排序法, 邊排邊做, 會看到「大泡泡會先到最右邊」,接著越來越多排好。
```cpp
#include <stdio.h>
int a[10]={90, 80 , 70 , 60 , 50 , 40 , 30 , 20 , 10 , 0 };

int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i] );
    printf("\n");

    for(int k=0;k<10-1;k++){

        for(int i=0;i<10-1;i++){
            if(a[i]>a[i+1]){
               int temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
            }
        }
        for(int i=0;i<10;i++)printf("%d ",a[i]);
        printf("\n");

    }
}
```
1. step01-1_為了解變數的範圍,我們先用最簡單的, 在外面有個變數 int a=10; 在兩個函式中,如果修改到, 就會改到同一個變數。
```cpp
#include <stdio.h>


int a=10;

void func()
{
    a=30;
    printf("func()中 a改成:%d\n",a);
}
int main()
{
    printf("main()中a是:%d\n",a);
    func();
    printf("main()中a是:%d\n",a);
}
```
2. step01-2_在外面宣告的 int a=10; 是global變數,全世界看得到。void func() 裡宣告的 int a=20; 是 local 變數。
```cpp
#include <stdio.h>


int a=10; ///Global全世界 全城變數

void func()
{
    int a = 20; ///local 區域變數
    printf("func()裡的a是:%d\n", a);
    a=30;
    printf("func()中a改成:%d\n", a);
}
int main()
{
    printf("main()中a是:%d\n",a);
    func();
    printf("main()中a是:%d\n",a);
}
```
3. step02-1_函式的參數傳遞時, 請用上週教過的「教室有門,上面用透明膠膜封起來,有標籤int n」進來的數值20, 就會 int a=20 的意思。
```cpp
#include <stdio.h>
int n=30;
int funcA(int a,int b)
{
    printf("funcA()的a,b是:%d %d\n",a,b);
    return a + b; ///20+20得到40把它傳出去
}
int funcB(int n)
{
    printf("funcB() 的 n 是:%d\n",n);
    int ans = funcA(n,n);
    return ans;
}
int main()
{
    int a=10, b=20;
    funcB(b);
    funcA(a,b);
    printf("main()的a,b是:%d %d\n",a,b);
}
```
4. step02-2_複習最大公因數,輾轉相除法, 利用 while迴圈來做, 重點是老大a, 老二b, 算出老三c=a%b。如果c==0, 那老二就是答案。
```cpp
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
```
5. step02-3_今天的大魔王, 是利用函式呼叫函式的方式, 來計算「輾轉相除法」找最大公因數。程式卻很簡單, 使用我們自己定義的 int gcd(int a, int b) 裡面如果a是0,b是答案。
```cpp
#include <stdio.h>
int gcd (int a, int b)
{
    if( a==0 ) return b;
    if( b==0 ) return a;

    return gcd(b, a%b);
}

int main()
{
    int a,b;
    scanf("%d%d", &a,&b);

    int ans = gcd(a,b);
    printf("%d",ans);
}
```
 step01-1_今天的主軸是字串, 我們先從字串的宣告、宣告並定義初始值、字串在 printf()裡使用%s拿來用。
 ```cpp
 #include <stdio.h>
int main()
{
    printf("Hellow World\n");

    char line[]="Hellow World";
    printf("整數 %d\n", 100);
    printf("浮點數 %f\n",3.141592653589793238462643383279);
    printf("%s 字串\n",line);
}
```
