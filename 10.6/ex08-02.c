#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	int status;
	int x, y;
	int sum=0;
	int mult=1;
	printf("intsert number");
	scanf("%d %d", &x, &y);

	pid = fork();

	if(pid>0)

	{
		
		
		mult = (int)pow(x, y);
		wait(&status);
		printf("parent: status is %d\n", mult+(status>>8));

	}
	else if(pid==0)
	{
		
		for(int i=x; i<=y;i++)
			sum+=i;
		exit(sum);
	}
	else
		printf("exit\n");
}

