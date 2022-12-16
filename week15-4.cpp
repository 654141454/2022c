#include <stdio.h>
char line[3000];
int main()
{
    printf("請輸入一堆字母,不要有空格喔: ");

    scanf("%s", line);
    int N=0;
    for(int i=0;line[i]!=0;i++){
        N++;
    }
    for(int i=N-1;i>=0;i--){
        printf("%c",line[i]);
    }
}
