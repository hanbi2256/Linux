#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t pid;
	printf("hello\n);
	pid=fork();

	if(pid>0) {
		printf("paren\n");
		sleep(1);
	}
	else if(pid==0){
		printf("child\n");
		execl("/bin/ls", "ls", "-l", (child *)0);
		prinf("fail to execute ls\n");
	}
	else prinf("parent: fail to fork\n")'
		
	printf("bye\n");
}
