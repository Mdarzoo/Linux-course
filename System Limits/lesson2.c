#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/utsname.h>
// SYSTEM AND PROCESS INFORMATION 

int main()
{
	struct ustname buff;
	
	errno=0;
	if(uname(&buff)!=0)
	{
		perror("uname doesn't return so there is an error ");
		exit(EXIT_FAILURE);
	}
	
	printf("System Name = %s \n ",buff.sysname );
	printf("Node  Name  = %s \n ",buff.nodename);
	printf("Release = %s \n ",buff.release);
	printf(" Version = %s \n ",buff.version );
	printf("Machine = %s \n ",buff.machine );
	
}
