#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<syslog.h>

static void structure_daemon()

{
	pid_t pid;
	pid = fork()
	if(pid < 0)
	exit(EXIT_SUCCESS);
	
	if(setsid()<0)
	exit(EXIT_FAILURE)
	signal(SIGCHHLD,SIG_IGN);
	
	signal(SIGHUP,SIG_IGN);
	pid=fork();
	
	
	if(pid < 0 )
	 exit(EXIT_FAILURE);
	
    if(pid > 0 )
    exit(EXIT_SUCCESS)
    
    umask(0);
    chdir("/");
    
    int x;
    
    for(x=sysconf(_SC_OPEN_MAX); X>=0; X--)
    {
    	close(x);
    	
	}
	
}




int main()
{
	structe_damon();
	for(;;)
	{
		syslog(LOG_NOTICE,"DAEMON HASSTART");
		sleep(20);
		break ; 
	}
	
	syslog(LOG_NOTICE , " DAEMON has terminated ");
	closelog();
	
	return EXIT_SUCCESS;
	
	
}
