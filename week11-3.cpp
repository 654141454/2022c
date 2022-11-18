///2數 => 2種結果
///3數 => 6種結果
///4數 => 24種結果
///5數 => 120種結果
///10數排序....
///攝影師在拍團體照時,調整高低的方法
///口訣:從左到右巡一輪,兩兩比較,不對就交換
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
