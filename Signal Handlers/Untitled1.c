#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

 void sighandler(int);
 
 int main()
 {
 	signal(SIGINT,sighandler);
 	
 	for(;;)
 	{
 		printf("sleeping___  \n ");
 		
	 }
 }
 
 void sighandler(int signum)
 {
 	printf("caught signal %d , and new i am exiting --  \n ",signum);
 	exit(1);
 }
