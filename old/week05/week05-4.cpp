#include <stdio.h>
int main()
{
    for(int i=0; i<5; i++){
        printf("電腦從0開始數, i:%d\n" , i);
    }
    for(int i=1; i<=5; i++ ){
        printf("人類從1開始數多一點點, i:%d\n", i);
    }
    for(int i=5; i>0; i--){
        printf("倒過來的迴圈, i:%d\n", i);
    }
}
