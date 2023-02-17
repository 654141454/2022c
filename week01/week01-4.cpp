#include <stdio.h>
#include <string.h>//for strlen()
int main()
{
	char line[40];
	scanf("%s", line);
	int ans=0;
	int N = strlen(line);
	for(int i=0; i<N; i++){
		if( line[i] == '2') ans++;
	}
	printf("%d\n", ans);
}
