#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{

	putenc("MYDATA=5");
	execl("0806", "0806", (char *)0);

}
