#include <stdio.h>
int main()
{
	int a[10], b, i=0, sum=0;
	scanf("%d", &b);
	while(b)
	{
		a[i++]=b;
		scanf("%d", &b);
	}
	scanf("%d", &b);
	for(int j=0; j<i; j++)
	{
		sum+=(a[j]==b);
	}
	printf("%d\n", sum);
}
