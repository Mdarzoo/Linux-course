#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
#include<sys/time.h>

#define  INTEVAL 500

void dosomething (int );

int main()
{
	struct itimerval it_val;
	if(signal(SIGALRM,(void(*)(int))dosomething)==SIG_ERR)
	{
		perror("unable to catch SIGALRM ");
		exit(1);
	}
	
 it_val.it_value.tv_sec= INTERVAL/1000;
 it_val.it_value.tv_sec=( INTERVAL*1000)%1000000;
 
 it_val.it_interval= it_val.it_value;
 
 
 if(setitimer(ITIMER_REAL, &it_val, NULL)== -1 )
 {
 	perror("error calling setitiemer()");
 	exit(1);
 	
 }
	
	for(;;)
	pause();
	
	
	
}
