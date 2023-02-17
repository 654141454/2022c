#include <stdio.h>
int main()
{
    int a[4]{10,20,30,40};
        ///i:0 1 2 3
    for(int i=0;i<4;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
        ///i:3 2 1 0
    for(int i=3;i>=0;i--){ ///­Ë¹L¨Ó°j°é
        printf("%d ",a[i]);
    }
}
