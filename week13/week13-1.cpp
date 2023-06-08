
#include <stdio.h>
int f(int n)
{
	if(n<0) return -n;
	else return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
