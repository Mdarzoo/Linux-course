#include<stdio.h>
#include<unistd.h>
#include<fcnlt.h>
#include<sys/stat.h>
#include<string.h>

int main()
{
	
	char fn[]= "linuxtemp.fifo";
	char out[100]="This is fifo and this is linux in [100]";
	
	int rf ,wf;
	
	if(mkfifo(fn,S_IRWXU)!=0)
	{
		perror("mkfifo () error ");
	}
	
	else
	{
		if(rf = open(fn.O_RDONLY | O_NONBLOCK) < 0 );
		perror("open() error while on the writing end ");
		else
		{
			if(write(wf , out , strlen(out)+1)== -1)
			perror("Write error()");
			else if (read(rf,in,sizeof(in))== -1)
			perror("read error() ");
			else
			{
				printf("reading '%s'from fifo \n ",in);
			}
			close(wf);
		}
		close(rf);
		
	}
	unlink(fn);
}
