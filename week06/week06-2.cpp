#include<stdio.h>
int main()
{
   /// FILE *fout =fopen("output.txt","w+");///write
    FILE * fin = fopen("output.txt", "r"); ///read
    char line[3000];
    fscanf(fin, "%s",line);
    printf("你讀到了%s\n", line);

    fscanf(fin, "%s",line);
    printf("你讀到了%s\n", line);
}
