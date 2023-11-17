#include <sys/time.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

#define MSGSIZE 16

void parent(int [][]);
int child(int []);

int main()
{
	int p1[2], p2[2];
	char msg[MSGSIZE];
	int i;
	pid_t pid1, pid2;
	fd_set initest, newset;

	pid1=pid2=0;

	if(pipe(p1)==-1)
		onerror("fail to call pipe() #1\n");
	if(pipe(p2)==-1)
		onerror("fail to call pipe() #2\n");
	if((pidS

}
