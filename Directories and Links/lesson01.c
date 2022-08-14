#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()

{
	
	int res=mkdir ("/home/linuxhind/Desktop/NewFolder",0777);
	if(res==0)
	{
		printf("creation of directories has been successful");
		
	}
	else
	{
		
		printf("creation of directories has been filed ! ");
	}
	
}
