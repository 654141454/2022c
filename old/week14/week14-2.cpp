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
