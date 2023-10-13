#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	pid_t pid1, pid2;
	
	pid1=pid2=-1;
	pid1=fork();

	if(pid>0)
		pid2=fork();
	if(pid>0&&pid2>0)
	{
		getpid();
	}
	else if(pid1==0 && pid2== -1)
	{
	}
	else if(pid1>0&&pid2==0)
	{
	}
	else
		printf("fail to fork\n");
	
}
