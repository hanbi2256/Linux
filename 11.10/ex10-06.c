#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

main()
{

	pid_t pid;
	

	if((pid = fork())>0)
	{
		sleep(2)
			kill(pid, SIGINT);
		raise(SIGINT);
		printf("[parent]bye\n");
	}
	else if(pid==0)
	{
		while(count)
		{
			printf("[childe]count is %d\n", count--);
			sleep(1);
		}
	}
	else printf("fail to fork\n");
}

