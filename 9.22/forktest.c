#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{

	pid_t pid;
	int i;
	int X = 1;
	int n;

	scanf("%d", &n);

	pid=fork();
	if(pid == 0) {
		for(i = 1; i <= n; i++) {
			X *= n;
		}
		printf("%d\n", X);
	}
	else if(pid>0) {
		for(i = 1; i <= n; i++)
		{
			X += n;
		}
		printf("%d", X);
	}
	else printf("fail to fork\n");
}
