#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
	struct flock flk={
		F_WRLCK,SEEK_SET,0,0,0
	};
	
  int fd; 
  flk.l_pid=getpid();
  if(argc > i )
  flk.l_type=F_RDLCK;
  
 if((fd=open("cprogram.c",O_RDWR))== -1)
 {
 	perror("error in opening file \n ");
 	exit(0);
	 }	
  prinft("Hit Enter to lock the file \n ");
  getchar();
  
  printf("checking if we could lock the file or not !  \n");
  
  
  if(fcntl(fd,F_SETLKW,&flk) == 1 )
  {
  	perror("fcntl error");
  	exit(0);
	  }	
	
	printf("we have locked it successfully \n ");
	printf("Hit Enter to unlock the file! \n");
	getchar();
	
	flk.l_type = F_UNLCK;
	
	 if(fcntl(fd,F_SETLK,&flk) == -1 )
     {
     	perror("fcntl error");
     	exit(0);
		 }	
	printf("yeas, file has been unlocked! \n");
	close(fd)
}
