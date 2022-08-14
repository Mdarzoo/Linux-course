#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<time.h>

#define 	INTERVAL 500 

void dosomething (int );

int main()
{
	 struct itimerval it_val;
	 
	 if(signal(SIALARM,(void(*)(int))dosomething)==SIG_ERR)
	 {
	 	perror("unable to catch SIGALRM");
	 	eixt(1);
	 }
	 it_val.it_value.tv_sec=INTERVAL/10000;
	 it_val.it_value.tv_usec=(INTERVAL*1000)%1000000;
	 it_val.it_intervalL=it_val.it_value;
	 
}


void dosomething(int signum)
{
	printf("Timer went off  \n ");
}
