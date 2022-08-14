#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	char *args[] = {"./execvp",NULL};
	
	execvp(args[0],args);
	printf("This is second File ");
	
}
