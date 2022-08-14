#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>

int main()
{
	char new_file[]="home/linuxhint/Desktop/NewFolder/new.txt";
	char new_dir[]= "home/linuxhint/Desktop/NewFolder";
	
	
	unlink(new_file);
	if(rmdir(new_dir) !=0)
	perror("rmdir() error");
	else
	puts ("removed! ");
	
}
