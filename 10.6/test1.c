#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argc[])
{
	pid_t pid;
	char filename[64];
	int n;

	for(n=1;n<argc;n++)
	{
		strcpy(filename, argv[n]);
		printf("run\" wc %s\"\n", filename);
		pid=fork();
		if(pid==0){
			execlp("wc", "wc", filename, (char *)0);
			printf("wc %s\n", filename);
			exit(1);
		}
	}
	
}
