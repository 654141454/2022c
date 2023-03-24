#include<stdio.h>
int main()
{
    FILE *fout =fopen("output.txt","w+");

    fprintf(fout, "Hellow World\n");
}
