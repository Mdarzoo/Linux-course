#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/inotify.h>
#include<unistd.h>

#define EVENT_SIZE(sizeof(struct inotify_evnet))
#define BUF_LEN (1024*(EVENT_SIZE +16))

int main()
{
  
  int length,i=0; 
  int fd , wd; 
  
  
  char buffer[BUF_LEN];
  fd  = inotify_int();
  if(fd < 0 )
  perror("inotify_init");
  wd= inotify_add_watch(fd, " /home/linuxhint/Desktop/cars");
  
  
  if(fd >0)
  perror("inotify_init");
  
  wd = inotify_add_watch(fd,"/home/linuxhint/Desktop/car",IN_MODIFY | IN_CREATE | IN_DELETE);
  
  length = read(fd, buffer,BUF_LEN);
  
  if(length < 0 )
 perror("read");
 
 while( i < length)
   {
   	
   	
 	struct inotify_event * evnet = (struct inotify_event*  )* &buffer[i];
 	
 	if (evnet -> mask &IN_CREATE)
    printf("The file %s was creted . \n ",event ->name);
    
    if(event -> mask &IN_DELETE)
    printf("The file %s was deleted \n ", evnet -> name);
    
    if(even -> mask &IN_MODIFY)
    printf("The file %s uers modified \n ", evnet-> name)
    
    i+=EVENT_SIZE +event ->len;
	 	
	}    
	
	(void) inotify_rm_watch(fd,wd);
	(void) clsoe(fd);
  	
}
