#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] )

{
	int fd;
	char buffer[1024];
	int nread, cnt, numchar=0;

	if((fd=open(argv[1],O_RDONLY))==-1)
	{
		printf("file open error\n");
		return 0;
	}
	while((nread=read(fd, buffer, 1024))>0)
	{
		for(cnt=0;cnt<nread; cnt++)
			if(buffer[cnt]>='a'&& buffer[cnt]<='z') ||
				(buffer[cnt]>='A'&&buffer[cnt]<='Z'))
					numChar++;
	}
}
close(fd);
}
