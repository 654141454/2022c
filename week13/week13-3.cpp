
#include <stdio.h>
void f(int n)
{
	printf("%d", n%10);
	if(n>=10) f(n/10);
}

int main()
{
	int n;
	scanf("%d", &n);
	f(n);
	printf("\n");
}
