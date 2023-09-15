#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argc)
{
	int filedes;
	off_t newpos;

	filedes=open(argv[1], O_RDONLY);
	newpos=lseek(filedes, (off_t)0, SEEK_END);

	printf("file size :%ld\n", newpose);

	close(filedes);
	close(newpos);
}

