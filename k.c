#include <stdlib.h>
#include <fcntl.h>

int main()
{
	int filedes;
	char pathname[]="temp0.txt";
	
	if((filedes=open(pathname, O_CREAT | 
	O_RDWR, 0644))==-1)
	{
		printf("file open error!\n");
		exit(1);
	}
	close(filedes);

		
}

