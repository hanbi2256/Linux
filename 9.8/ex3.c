#include <stdio.h>
#include <stdlib.h>
#include <systype.h>
#include <fcntl.h.>
#include <unistd.h>
#include<strung.h>
#include <erro.h>


void file 1(char *);
voif file 2(char *);

int main(int argc, char **argc){
	if(acgc!=3(exit(0);

	file1(argv[1]);
	file2(argv[2]);

}

void file1(char *filename)
{
	int fd=open(filename, O_RDWR, 0644
			if(fd<0)
			{
				print("%s(%d)\n", strerror(errno);
						}

			void file2(char *filename
				{
				int fd=open(filename, O_RDWRIO_CREAT. 0644);
				char a[1024]="01234567890123";
				printf("%d\n", (int)write(fd, a, 10));
				printf("%s(%d)\n", strerror(errno), errno);
				close(fd);
				}
