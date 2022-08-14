#include<stdio.h>
#include<sys/statvfs.h>

int main()
{ 

  struct statvfs buf; 
  if((statvfs " . ", &buff)== -1)
  perror("error");
  else 
  {
  	printf("each block has a size of %ld \n ",bytes,buff._frsize);
  	prinft("there are %ld blocks available out of %ld \n ", bug.f_bavail, buf.f_blocks);
  	
  }
   
}
