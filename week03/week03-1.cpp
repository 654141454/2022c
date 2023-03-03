#include <stdio.h>
int mian()
{
	char line[30];
	while(scanf("%s",line)==2){
		printf("%s",line);
		printf(" -- is not a palindrome.\n\n");
	}
}
